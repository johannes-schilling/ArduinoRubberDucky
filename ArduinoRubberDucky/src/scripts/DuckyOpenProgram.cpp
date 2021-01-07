// 
// 
// 

#include "DuckyOpenProgram.h"
#include "Keyboard/KeyboardCommands.h"
#include <Keyboard.h>

//Open a Program over execute (Win+R) window
void OpenProgram::DuckyOpenProgram(String program)
{
	KeyboardCommands::WindowsCombination('r');
	KeyboardCommands::Write(program);
	KeyboardCommands::TypeKey(KEY_RETURN);
}

