//
// HTTPServerTest.cpp
//
// $Id: //poco/1.4/Net/testsuite/src/HTTPServerTest.cpp#1 $
//
// Copyright (c) 2005-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//

#include "SrvEngine.h"
#include "MyRequestHandlerFactory.h"
#include "AdminRequestHandler.h"

MyRequestHandlerFactory::MyRequestHandlerFactory(MyHttpServer* httpServer):_httpServer(httpServer)
{

}

HTTPRequestHandler* MyRequestHandlerFactory::createRequestHandler(const HTTPServerRequest &req)
{
	RequestType queryType = eRequest_Type_None;
	const std::string& uri = req.getURI();
	H::logger->info("�յ�HTTP����:%s", uri.c_str());
	if (STRNICMP(uri.c_str(),"/SendRoomCard",13) == 0 )
	{
		queryType = eSendRoomCard;
	}
	else if (STRNICMP(uri.c_str(), "/SendMail",9) == 0)
	{
		queryType = eSendMail;
	}
	else if (STRNICMP(uri.c_str(), "/SendNotice",11) == 0)
	{
		queryType = eSendNotice;
	}
	else if (STRNICMP(uri.c_str(), "/IosCharge",10) == 0)
	{
		queryType = eIosCharge;
	}
	else if (STRNICMP(uri.c_str(), "/RoomInfo",9) == 0)
	{
		queryType = eRoomInfoList;
	}
	else if (STRNICMP(uri.c_str(), "/MyRoom",7) == 0)
	{
		queryType = eMyRoom;
	}
	else if (STRNICMP(uri.c_str(), "/UserEdit",9) == 0)
	{
		queryType = eUserEdit;
	}
	else if (STRNICMP(uri.c_str(), "/ExitGame",9) == 0)
	{
		queryType = eExitGame;
	}
	else if (STRNICMP(uri.c_str(), "/ReloadConfig",13) == 0)
	{
		queryType = eReloadConfig;
	}
	else if (STRNICMP(uri.c_str(), "/SceneList", 10) == 0)
	{
		queryType = eSceneList;
	}
	return new AdminRequestHandler(_httpServer, queryType);
}
