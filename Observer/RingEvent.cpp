#include "RingEvent.h"
#include <iostream>

RingEvent::RingEvent(EventSource *source)
	: _source(source)
{
}

RingEvent::~RingEvent()
{
}

void RingEvent::ring()
{
	std::cout << _source->getName() << "铃向了\n";
}
