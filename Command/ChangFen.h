#ifndef CHANGFEN_H
#define CHANGFEN_H

#include "Breakfast.h"
#include "ChangFenChef.h"
class ChangFen : public Breakfast{
public:
	ChangFen(ChangFenChef *chef);
	~ChangFen(); 

	void cooking() override;

private:
	ChangFenChef *_chef;
};
#endif //CHANGFEN_H
