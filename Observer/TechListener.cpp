#include "TechListener.h"
#include "RingEvent.h"
#include <iostream>

void TechListener::handleBell(RingEvent *event)
{
	event->ring();
	std::cout << "老师收到铃声了\n";
}
