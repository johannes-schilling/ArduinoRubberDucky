// DuckyMouseJiggler.h

#ifndef _DUCKYMOUSEJIGGLER_h
#define _DUCKYMOUSEJIGGLER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class MouseJiggler
{
public:
	static void MouseJiggle(signed char distance);
};



#endif

