#include "NetMsgHandler.h"
#include "ProcLsHandler.h"
#include "ProcSsHandler.h"
#include "ProcFepHandler.h"
#include "GameService.h"


NetMsgHandler::NetMsgHandler() :zMsgHandler(GameService::Instance())
{
	// dp 
#define REGISTER_DP_MESSAGE(cmd,cmdType,cls,handler)\
	{\
	RegisterMessage(cmd,cmdType, sizeof(cls), boost::bind(&ProcDpHandler::handler, ProcDpHandler::Instance(), _1, _2, _3)); \
	}

	//REGISTER_DP_MESSAGE(PRO_D2W_GLOBAL_INFO,D2WGlobalInfo,RqGlobalInfo);
	//REGISTER_DP_MESSAGE(PRO_D2W_LOAD_SORTLIST,D2WLoadSortLists, NtLoadSortLists);
	//REGISTER_DP_MESSAGE(PRO_D2W_SELECT_ROLE_RESULT, D2WSelectRoleResult, RtSelectRoleResult);

#undef REGISTER_DP_MESSAGE

		// ls
#define REGISTER_LS_MESSAGE(cmd,cmdType,cls,handler)\
	{\
	RegisterMessage(cmd,cmdType, sizeof(cls), boost::bind(&ProcLsHandler::handler, ProcLsHandler::Instance(), _1, _2, _3)); \
	}

	REGISTER_LS_MESSAGE(::comdef::msg_ss, ::msg_maj::LoginTokenNotifyID, PbMsgWebSS, NotifyLoginToken);

#undef REGISTER_LS_MESSAGE

		// ss
#define REGISTER_SS_MESSAGE(cmd,cmdType,cls,handler)\
	{\
	RegisterMessage(cmd,cmdType, sizeof(cls), boost::bind(&ProcSsHandler::handler, ProcSsHandler::Instance(), _1, _2, _3)); \
	}

	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::TransterToSceneReqID, PbMsgWebSS, TransTerToSceneReq);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::TransterToSceneRespID, PbMsgWebSS, TransTerToSceneResp);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::UpdateRankRequestID, PbMsgWebSS, NotifyUpdateRankInfo);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::QueryRankRequestID, PbMsgWebSS, OnQueryRankRequest);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::req_robot_join_room, PbMsgWebSS, OnReqRobotJoinRoom);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::GetBindingAgentInfoReqID, PbMsgWebSS, OnReqBindInfoReq);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::BindingAgentReqID, PbMsgWebSS, OnReqBindAgentReq);
	REGISTER_SS_MESSAGE(::comdef::msg_ss, ::msg_maj::InputInviteCodeReqID, PbMsgWebSS, OnInputInviteCodeReq);
	
	REGISTER_SS_MESSAGE(::comdef::msg_maj, ::msg_maj::add_room_to_ws, PbMsgWebSS, OnAddRoomToWs);
	REGISTER_SS_MESSAGE(::comdef::msg_maj, ::msg_maj::upate_room_to_ws, PbMsgWebSS, OnUpdateRoomToWs);
	REGISTER_SS_MESSAGE(::comdef::msg_maj, ::msg_maj::remove_room_to_ws, PbMsgWebSS, OnRemoveRoomToWs);

	REGISTER_SS_MESSAGE(::comdef::msg_role, ::msg_maj::sync_role_to_ws, PbMsgWebSS, OnSyncRoleToWs);


#undef REGISTER_SS_MESSAGE

	// fep
#define REGISTER_FEP_MESSAGE(cmd,cmdType,cls,handler)\
	{\
	RegisterMessage(cmd,cmdType, sizeof(cls), boost::bind(&ProcFepHandler::handler, ProcFepHandler::Instance(), _1, _2, _3)); \
	}

	REGISTER_FEP_MESSAGE(::comdef::msg_login, ::msg_maj::logout_req, PbMsgWebSS, HandleLoginOut);
	REGISTER_FEP_MESSAGE(::comdef::msg_login, ::msg_maj::login_player_req, PbMsgWebSS, HandleLoginPlayer);
	REGISTER_FEP_MESSAGE(::comdef::msg_login, ::msg_maj::notify_dis_conntion, PbMsgWebSS, HandlePlayerExit);

#undef REGISTER_FEP_MESSAGE

}


NetMsgHandler::~NetMsgHandler()
{ 
}

void NetMsgHandler::OnNetMsgEnter(NetSocket& rSocket)
{
	CommonOnNetMsgEnter(rSocket);
}

void NetMsgHandler::OnNetMsg(NetSocket& rSocket, NetMsgSS* pMsg, int32_t nSize)
{
	CommonOnNetMsg(rSocket, pMsg, nSize);
}

void NetMsgHandler::OnNetMsgExit(NetSocket& rSocket)
{
	CommonOnNetMsgExit(rSocket);
}


