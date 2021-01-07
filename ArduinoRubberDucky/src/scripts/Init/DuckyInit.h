// KeyboardInit.h

#ifndef _DUCKYINIT_h
#define _DUCKYINIT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


using namespace std;
class DuckyInit
{
public:
	static void KeyboardStart();	//executes Keyboard.begin()
	static void MouseStart();		//executes Mouse.begin()
	static void Finish();			//executes Keyboard.end() and Mouse.end()
};

#endif

