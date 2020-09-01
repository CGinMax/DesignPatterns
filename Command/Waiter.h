#ifndef WAITER_H
#define WAITER_H

#include "ChangFen.h"
#include "HunTun.h"

class Waiter{
public:

	void setChangFen(Breakfast *fast);

	void setHunTun(Breakfast *fast);

	void chooseChangFen();

	void chooseHunTun();
private:
	Breakfast *changfen;
	Breakfast *huntun;
};
#endif // WAITER_H
