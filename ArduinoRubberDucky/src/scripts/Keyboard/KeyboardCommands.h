// KeyboardCommands.h

#ifndef _KEYBOARDCOMMANDS_h
#define _KEYBOARDCOMMANDS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

using namespace std;

class KeyboardCommands
{
public:
	static void TypeKey(uint8_t key);
	static void Write(String text);
	static void Write(int number);
	static void WindowsCombination(uint8_t key);
	static void KeyCombination(uint8_t holdKey, uint8_t targetKey);
};

#endif

