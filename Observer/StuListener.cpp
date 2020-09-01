#include "StuListener.h"
#include <iostream>
#include "RingEvent.h"

void StuListener::handleBell(RingEvent *event)
{

	event->ring();
	std::cout << "学生接收到铃声了\n";
}
