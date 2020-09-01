#include "EventSource.h"
#include "RingEvent.h"

EventSource::EventSource(const std::string &name)
	: _name(name)
{
}

EventSource::~EventSource()
{
	for (EventListener *l : _listeners)
	{
	
		delete l;
	}
}

std::string EventSource::getName() const 
{
	return _name;
}

void EventSource::addListener(EventListener *listener)
{
	_listeners.push_back(listener);
}

void EventSource::ring()
{
	RingEvent *event = new RingEvent(this);
	notifies(event);
	delete event;
}

void EventSource::notifies(RingEvent *event)
{
	for (EventListener *listener : _listeners) {
		listener->handleBell(event);
	}
}
