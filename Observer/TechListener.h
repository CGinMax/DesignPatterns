#ifndef TECHLISTENER_H
#define TECHLISTENER_H


#include "EventListener.h"
class TechListener : public EventListener{
public:

	void handleBell(RingEvent *event) override;
private:
};
#endif // TECHLISTENER_H
