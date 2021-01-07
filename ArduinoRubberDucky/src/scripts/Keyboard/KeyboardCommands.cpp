// 
// 
// 

#include "KeyboardCommands.h"
#include <Keyboard.h>



//Press a defined Key
void KeyboardCommands::TypeKey(uint8_t key)
{
	Keyboard.press(key);
	delay(100);
	Keyboard.release(key);
	delay(100);
}

//Write Text with Keyboard
void KeyboardCommands::Write(String text)
{
	Keyboard.print(text);
	delay(100);
}

//Write number with Keyboard
void KeyboardCommands::Write(int number)
{
	Keyboard.print(number);
	delay(100);
}


 // Press the Windows key + one additional key
void KeyboardCommands::WindowsCombination(uint8_t key)
{
	KeyCombination(KEY_LEFT_GUI, key);
}


 //Hold Key + Press a Target Key
void KeyboardCommands::KeyCombination(uint8_t holdKey, uint8_t targetKey)
{
	Keyboard.press(holdKey);	//Hold first key
	delay(100);
	Keyboard.press(targetKey);	//Press second key
	delay(100);
	Keyboard.releaseAll();		//Release all pressed keys
	delay(100);
}