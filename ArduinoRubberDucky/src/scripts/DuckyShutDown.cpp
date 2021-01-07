// 
// 
// 

#include "DuckyShutDown.h"
#include "Keyboard/KeyboardCommands.h"
#include "DuckyOpenProgram.h"

#include <Keyboard.h>

void ShutDown::DuckyShutDown()
{
	OpenProgram::DuckyOpenProgram("cmd");
	KeyboardCommands::Write("shutdown /f /p");
	KeyboardCommands::TypeKey(KEY_RETURN);
}


void ShutDown::DuckyShutDown(int time)
{
	OpenProgram::DuckyOpenProgram("cmd");
	KeyboardCommands::Write("shutdown /s /t ");
	KeyboardCommands::Write(time);
	KeyboardCommands::TypeKey(KEY_RETURN);

	//Confirm Shutdown message
	delay(500);
	KeyboardCommands::TypeKey(KEY_RETURN);
	delay(500);
	KeyboardCommands::Write("exit");
	KeyboardCommands::TypeKey(KEY_RETURN);
}



