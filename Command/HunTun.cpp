#include "HunTun.h"

HunTun::HunTun(HunTunChef *chef) :
	_chef(chef)
{
}

HunTun::~HunTun()
{
	if (_chef) {
		delete _chef;
		_chef = nullptr;
	}
}

void HunTun::cooking()
{
	_chef->cooking();
}
