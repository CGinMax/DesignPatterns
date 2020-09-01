#ifndef EVENTSOURCE_H
#define EVENTSOURCE_H

#include <string>
#include <list>
#include "EventListener.h"

class RingEvent;
class EventSource{
public:
	EventSource(const std::string &name);
	~EventSource();

	std::string getName() const;

	void addListener(EventListener *listener);
	void ring();
	void notifies(RingEvent *event);

protected:
	std::string _name;
private:
	std::list<EventListener*> _listeners;
};
#endif // EVENTSOURCE_H
