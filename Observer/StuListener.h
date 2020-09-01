#ifndef STULISTENER_H
#define STULISTENER_H

#include "EventListener.h"

class StuListener : public EventListener
{
public:
	void handleBell(RingEvent *event) override;
};

#endif // STULISTENER_H
