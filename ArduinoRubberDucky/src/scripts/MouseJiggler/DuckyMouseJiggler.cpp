// 
// 
// 

#include "DuckyMouseJiggler.h"
#include <Mouse.h>

//Move mouse coursor right and back to initial position
void MouseJiggler::MouseJiggle(signed char distance)
{
	//Move right
	Mouse.move(distance, 0, 0);
	delay(100);
	//Move left
	Mouse.move(-distance, 0, 0);
	delay(1000);
}


