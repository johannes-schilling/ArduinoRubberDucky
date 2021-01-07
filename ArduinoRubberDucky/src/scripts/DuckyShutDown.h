// DuckyShutDown.h

#ifndef _DUCKYSHUTDOWN_h
#define _DUCKYSHUTDOWN_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class ShutDown
{
public:
	static void DuckyShutDown();
	static void DuckyShutDown(int time);
};




#endif

