// 
// 
// 

#include "RubberDucky.h"

#include "scripts/Init/DuckyInit.h"
#include "scripts/Keyboard/KeyboardCommands.h"
#include "scripts/DuckyOpenProgram.h"
#include "scripts/DuckyShutDown.h"
#include "scripts/DuckyConnectFTP.h"
#include "scripts/MouseJiggler/DuckyMouseJiggler.h"


RubberDucky& RubberDucky::InitKeyboard()
{
	DuckyInit::KeyboardStart();
	return *this;
}
RubberDucky& RubberDucky::InitMouse()
{
	DuckyInit::MouseStart();
	return *this;
}
RubberDucky& RubberDucky::finish()
{
	DuckyInit::Finish();
	return *this;
}

RubberDucky& RubberDucky::MouseJiggle(signed char dist)
{
	MouseJiggler::MouseJiggle(dist);
	return *this;
}

RubberDucky& RubberDucky::OpenProgram(String Program)
{
	OpenProgram::DuckyOpenProgram(Program);
	return *this;
}

RubberDucky& RubberDucky::ShutDown()
{
	ShutDown::DuckyShutDown();
	return *this;
}


RubberDucky& RubberDucky::ShutDown(int time)
{
	ShutDown::DuckyShutDown(time);
	return *this;
}

RubberDucky& RubberDucky::WriteText(String text)
{
	KeyboardCommands::Write(text);
	return *this;
}

RubberDucky& RubberDucky::OpenFTP(String server)
{
	ConnectFTP::DuckyConnectFTP(server);
	return *this;
}

RubberDucky& RubberDucky::OpenFTP(String server, String user, String password)
{
	ConnectFTP::DuckyConnectFTP(server, user, password);
	return *this;
}

RubberDucky& RubberDucky::DownloadFile(String file)
{
	ConnectFTP::DuckyDownloadFile(file);
	return *this;
}