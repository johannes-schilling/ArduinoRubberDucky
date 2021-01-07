// RubberDucky.h

#ifndef _RUBBERDUCKY_h
#define _RUBBERDUCKY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


class RubberDucky
{
public:
	RubberDucky& InitKeyboard();
	RubberDucky& InitMouse();
	RubberDucky& finish();
	RubberDucky& MouseJiggle(signed char dist);
	RubberDucky& OpenProgram(String Program);
	RubberDucky& ShutDown();
	RubberDucky& ShutDown(int time);
	RubberDucky& WriteText(String text);
	RubberDucky& OpenFTP(String server);
	RubberDucky& OpenFTP(String server, String user, String password);
	RubberDucky& DownloadFile(String file);
};

#endif

