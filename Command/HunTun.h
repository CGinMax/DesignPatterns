#ifndef HUNTUN_H
#define HUNTUN_H

#include "Breakfast.h"
#include "HunTunChef.h"

class HunTun : public Breakfast{
public:
	HunTun(HunTunChef *chef);
	~HunTun();

	void cooking() override;
private:
	HunTunChef *_chef;
};
#endif //HUNTUN_H
