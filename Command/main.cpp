#include <iostream>

#include <string>
#include "Waiter.h"
int main(int argc, char *argv[])
{
	Waiter waiter;
	ChangFen changfen(new ChangFenChef());
	HunTun huntun(new HunTunChef());
	waiter.setChangFen(&changfen);
	waiter.chooseChangFen();

	waiter.setHunTun(&huntun);
	waiter.chooseHunTun();
	return 0;
}
