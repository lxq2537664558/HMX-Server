#include "WorldServer.h"
#include "WorldUser.h"

extern DWORD cancel_country_need_money;
extern DWORD is_cancel_country;


template<typename TMsg>
struct MsgSendToAllFep : public execEntry<zSession>
{
	MsgSendToAllFep(TMsg* __msg, int32 __size) :_msg(__msg), _size(__size)
	{
	}
	virtual bool exec(zSession *entry)
	{
		if (entry->sessionType == zSession::FOR_FEP)
		{
			entry->sendMsg(_msg, _size);
		}
		return true;
	}
	TMsg* _msg;
	int32 _size;
};


/*
* \brief ���û�������Ϣ
* ����û����ڸ÷�����,����sessionת��
*
* \param id �û���ID
* \param cmd ��Ϣ
* \param len ��Ϣ����
*
* \return �Ƿ�ɹ�
*/
bool sendCmdByID(DWORD id, const void *cmd, int len)
{

	return true;
}


/*
* \brief ���û�������Ϣ
* ����û����ڸ÷�����,����sessionת��
*
* \param id �û�����ʱID
* \param cmd ��Ϣ
* \param len ��Ϣ����
*
* \return �Ƿ�ɹ�
*/
bool sendCmdByTempID(DWORD id, const void *cmd, int len)
{

	return true;
}


/*
* \brief ���û�������Ϣ
* ����û����ڸ÷�����,����sessionת��
*
* \param name �û�������
* \param cmd ��Ϣ
* \param len ��Ϣ����
*
* \return �Ƿ�ɹ�
*/
bool sendCmdByName(char * name, const void *cmd, int len)
{

	return true;
}

/**
* \brief ���캯��
*
*
* \param user: ������Ƶ�����û�
*/
WorldChannel::WorldChannel() :zEntry()
{
}

WorldChannel::~WorldChannel()
{

}

const dbCol chat_fields[] =
{
	{ "ID",DB_QWORD,sizeof(int64) },
	{ "NAME",DB_STR,MAX_NAMESIZE + 1 },
	{ "BINDATA",DB_BIN2,0 },
	{ NULL,0,0 }
};

#pragma pack(push,1)
struct stChatmsgRecord
{
	int64 id;
	char name[MAX_NAMESIZE + 1];
	int32 size;
	char data[0];
};
#pragma pack(pop)


bool WorldChannel::loadDB()
{
	BUFFER_CMD(stChatmsgRecord, data, MAX_USERDATASIZE);

	char wheres[100];
	memset(wheres, 0, sizeof(wheres));
	sprintf(wheres, "`id`=%lld", this->id);
	
	int ret = NetService::getMe().getDbMysql()->ExecSelectLimit("Chatmsg", chat_fields, wheres, NULL, (unsigned char*)data);
	if (ret == 1)
	{
		strncpy(this->name, data->name, MAX_NAMESIZE);
		// ��������������
		::protobuf::ChatMsgBinary proto;
		proto.ParseFromArray(data->data, data->size);
		unserialize(proto);
		return true;
	}
	else
	{
		Zebra::logger->error("����Ƶ���ڴ�ʧ�ܣ��Ҳ�������");
		return false;
	}
}

void WorldChannel::saveDB()
{
	BUFFER_CMD(stChatmsgRecord, data, MAX_USERDATASIZE);

	data->id = this->id;
	strncpy(data->name, this->name, MAX_NAMESIZE);

	::protobuf::ChatMsgBinary proto;
	serialize(proto);
	data->size = proto.ByteSize();
	proto.SerializeToArray(data->data, MAX_USERDATASIZE);

	static char wheres[100];
	memset(wheres, 0, sizeof(wheres));
	sprintf(wheres, "`id`=%llu", this->id);

	int ret = NetService::getMe().getDbMysql()->ExecUpdate("Chatmsg", chat_fields, (const char*)data, wheres);
	if (ret == 0)
	{
		Zebra::logger->info("����Ƶ���ɹ�!");
	}
	else
	{
		Zebra::logger->error("����Ƶ��ʧ��!");
	}
}

void WorldChannel::serialize(protobuf::ChatMsgBinary& proto)
{

}

void WorldChannel::unserialize(const protobuf::ChatMsgBinary& proto)
{

}

/**
* \brief ���͸���Ƶ���������û�
*
*
* \param cmd: ��������
* \param len:���ݳ���
* \return �����Ƿ�ɹ�
*/
bool WorldChannel::sendCmdToAll(const NetMsgSS *cmd, int len)
{
	BUFFER_CMD(S2FBoradCastMsg, send, MAX_BUFFERSIZE);
	send->msgtype = BORADCAST_TYPE_ALL;
	send->regid = 0;
	send->size = len;
	memcpy(send->data, cmd, len);

	MsgSendToAllFep<S2FBoradCastMsg> exec(send,sizeof(S2FBoradCastMsg) + send->size * sizeof(send->data[0]));
	NetService::getMe().getSessionMgr().execEveryConn(exec);

	return true;
}

/**
* \brief ת��������Ϣ��9��
*
*
* \param user: ��������
* \param rev: ת��������
* \param cmdLen: ���ݳ���
* \return �����Ƿ�ɹ�
*/
bool WorldChannel::sendNine(WorldChannel::UserData *user, const NetMsgSS *cmd, DWORD len)
{
	BUFFER_CMD(S2FBoradCastMsg, send, MAX_BUFFERSIZE);
	send->msgtype = BORADCAST_TYPE_ALL;
	send->regid = 0;
	send->size = len;
	memcpy(send->data, cmd, len);
	MsgSendToAllFep<S2FBoradCastMsg> exec(send,sizeof(S2FBoradCastMsg) + send->size * sizeof(send->data[0]));
	NetService::getMe().getSessionMgr().execEveryConn(exec);
	return true;
}

#define getMessage(msg,msglen,pat)  \
	do  \
{  \
	va_list ap;  \
	bzero(msg,msglen);  \
	va_start(ap,pat);    \
	vsnprintf(msg,msglen - 1,pat,ap);  \
	va_end(ap);  \
}while(false)


/**
* \brief ��������Ϣ������Ƶ��
*
*
* \param user: ����ָ����û�
* \param rev: �յ���ָ��
* \param cmdLen: ָ���
* \return �����Ƿ�ɹ�
*/
bool WorldChannel::sendCountry(WorldChannel::UserData *user, const NetMsgSS *cmd, DWORD len)
{
	BUFFER_CMD(S2FBoradCastMsg, send, MAX_BUFFERSIZE);
	send->msgtype = BORADCAST_TYPE_ALL;
	send->regid = 0;
	send->size = len;
	memcpy(send->data, cmd, len);
	MsgSendToAllFep<S2FBoradCastMsg> exec(send, sizeof(S2FBoradCastMsg) + send->size * sizeof(send->data[0]));
	NetService::getMe().getSessionMgr().execEveryConn(exec);
	return true;
}


/**
* \brief ���͸��õ�ͼ�������û�
*
* \param mapID ��ͼID
* \param cmd ��Ϣ
* \param len: ����
* \return �����Ƿ�ɹ�
*/
bool WorldChannel::sendCmdToMap(DWORD mapID, const NetMsgSS *cmd, int len)
{
	BUFFER_CMD(S2FBoradCastMsg, send, MAX_BUFFERSIZE);
	send->msgtype = BORADCAST_TYPE_ALL;
	send->regid = mapID;
	send->size = len;
	memcpy(send->data, cmd, len);
	MsgSendToAllFep<S2FBoradCastMsg> exec(send, sizeof(S2FBoradCastMsg) + send->size * sizeof(send->data[0]));
	NetService::getMe().getSessionMgr().execEveryConn(exec);
	return true;
}

/**
* \brief ˽��
*
*
* \param user: ��������
* \param rev:����ָ��
* \param cmdLen: ָ���
* \return �����Ƿ�ɹ�
*/
bool WorldChannel::sendPrivate(WorldChannel::UserData *user, const NetMsgSS *rev, DWORD cmdLen)
{

	return true;
}

bool WorldChannel::sendTeam(QWORD teamid, const NetMsgSS *cmd, DWORD len)
{
	BUFFER_CMD(S2FBoradCastMsg, send, MAX_BUFFERSIZE);
	send->msgtype = BORADCAST_TYPE_ALL;
	send->regid = teamid;
	send->size = len;
	memcpy(send->data, cmd, len);
	MsgSendToAllFep<S2FBoradCastMsg> exec(send, sizeof(S2FBoradCastMsg) + send->size * sizeof(send->data[0]));
	NetService::getMe().getSessionMgr().execEveryConn(exec);
	return true;
}

/**
* \brief Ψһʵ��
*
*/
WorldChannelM::WorldChannelM()
{
	channelUniqeID = new zUniqueDWORDID(1);
}

WorldChannelM::~WorldChannelM()
{
	SAFE_DELETE(channelUniqeID);
}

void WorldChannelM::loadDB()
{
	const dbCol msg_id[] =
	{
		{ "ID",DB_QWORD,sizeof(QWORD) },
		{ NULL,0,0 },
	};

#pragma pack(push,1)
	struct dbUserID
	{
		QWORD id;
	};
#pragma pack(pop)

	dbUserID* dataList, *dataTmp;
	int ret = NetService::getMe().getDbMysql()->ExecSelect("Chatmsg", msg_id, NULL, NULL, (unsigned char**)&dataList);
	if (ret > 0)
	{
		int loadcount = 0;
		int failcount = 0;
		for (int c = 0; c < ret; ++c)
		{
			dataTmp = &dataList[c];
			WorldChannel* channel = CreateObj();
			channel->id = dataTmp->id;
			if (channel->loadDB() && add(channel))
			{
				loadcount++;
			}
			else
			{
				failcount++;
				Zebra::logger->error("����Ƶ��ʧ��[ID:%lld]", channel->id);
				remove(channel);
			}
		}

		SAFE_DELETE_VEC(dataList);
		Zebra::logger->info("��%d�����ݣ��ɹ�����%d��,ʧ��%d��", ret, loadcount, failcount);

	}
}

/**
* \brief �õ�һ��Ψһ���
*
*
* \param tempid: Ψһ���(���)
* \return �õ��ı���Ƿ�Ψһ
*/
bool WorldChannelM::getUniqeID(QWORD &tempid)
{
	tempid = channelUniqeID->get();
	return (tempid != channelUniqeID->invalid());
}

/**
* \brief �ջ�һ��Ψһ���
*
*
* \param tempid: �ջصı��
*/
void WorldChannelM::putUniqeID(const QWORD &tempid)
{
	channelUniqeID->put(tempid);
}

/**
* \brief ��������Ƶ��
*
*
* \param channel: Ƶ��
* \return �����Ƿ�ɹ�
*/
bool WorldChannelM::add(WorldChannel *channel)
{
	bool ret;
	mlock.lock();
	ret = addEntry(channel);
	mlock.unlock();
	return ret;
}

/**
* \brief ������Ƶ����ɾ��һ������Ƶ��
*
*
* \param dwChannelID: Ƶ��id
*/
void WorldChannelM::remove(WorldChannel* channel)
{
	mlock.lock();
	removeEntry(channel);
	mlock.unlock();
}

/**
* \brief �õ�һ������Ƶ��
*
*
* \param dwChannelID: Ƶ��id
* \return ����Ƶ��
*/
WorldChannel *WorldChannelM::get(DWORD dwChannelID)
{
	WorldChannel *ret = NULL;
	mlock.lock();
	ret = (WorldChannel *)getEntryByTempID(dwChannelID);
	mlock.unlock();
	return ret;
}

WorldChannel* WorldChannelM::CreateObj()
{
	return objpool.CreateObj();
}

void WorldChannelM::DestroyObj(WorldChannel* obj)
{
	objpool.DestroyObj(obj);
}

/**
* \brief ��16������תΪ10����
*
*
* \param ch: 16�����ַ�
* \return ת�����10������
*/
BYTE hexchtoi(char &ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return BYTE(ch - '0');
	}
	else if ((ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f'))
	{
		return BYTE(toupper(ch) - 'A') + 10;
	}
	return 0;
}


