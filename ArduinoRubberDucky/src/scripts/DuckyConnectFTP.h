// DuckyConnectFTP.h

#ifndef _DUCKYCONNECTFTP_h
#define _DUCKYCONNECTFTP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class ConnectFTP
{
public:
	static void DuckyConnectFTP(String server);
	static void DuckyConnectFTP(String server, String user, String password);
	static void DuckyDownloadFile(String file);
};



#endif

