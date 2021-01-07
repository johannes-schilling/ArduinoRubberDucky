// Init to use Arduino as keyboard or mouse
#include "DuckyInit.h"

//Arduino libraries
#include <Keyboard.h>
#include <Mouse.h>

void DuckyInit::KeyboardStart()
{
	Keyboard.begin();
	delay(1000);
}

 void DuckyInit::MouseStart()
{
	Mouse.begin();
	delay(1000);
}

void DuckyInit::Finish()
{
	Keyboard.end();
	Mouse.end();
}


