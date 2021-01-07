// DuckyOpenProgram.h

#ifndef _DUCKYOPENPROGRAM_h
#define _DUCKYOPENPROGRAM_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class OpenProgram
{
public:
	static void DuckyOpenProgram(String program);
};


#endif

