#ifndef _LITTE_CHIEF_
#define _LITTE_CHIEF_

#include "MealBuilder.h"

class LitteChief : public MealBuilder{
public:
    LitteChief();
    ~LitteChief();

    virtual void buildDrink();
    virtual void buildFood();
};

#endif