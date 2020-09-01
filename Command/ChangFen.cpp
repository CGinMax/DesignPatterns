#include "ChangFen.h"

ChangFen::ChangFen(ChangFenChef *chef) : _chef(chef)
{
}

ChangFen::~ChangFen()
{
	if (_chef) {
		delete _chef;
		_chef = nullptr;
	}
}

void ChangFen::cooking()
{
	_chef->cooking();
}
