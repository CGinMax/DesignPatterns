#include "Waiter.h"

void Waiter::setChangFen(Breakfast *fast)
{
	changfen = fast;
}

void Waiter::setHunTun(Breakfast *fast)
{
	huntun = fast;
}

void Waiter::chooseChangFen()
{
	changfen->cooking();
}

void Waiter::chooseHunTun()
{
	huntun->cooking();
}
