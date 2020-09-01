#ifndef RINGEVENT_H
#define RINGEVENT_H

#include "EventSource.h"

class RingEvent{
public:
	RingEvent(EventSource *source);
	~RingEvent();

	void ring();

private:
	EventSource *_source;
};
#endif // RINGEVENT_H

