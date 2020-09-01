#ifndef EVENTLISTENER_H
#define EVENTLISTENER_H

class RingEvent;
class EventListener{
public:
	virtual void handleBell(RingEvent *event) = 0;
};
#endif // EVENTLISTENER_H
