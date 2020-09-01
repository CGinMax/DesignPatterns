#ifndef _MAIN_CHIEF_
#define _MAIN_CHIEF_

#include "MealBuilder.h"

class MainChief : public MealBuilder{
public:
    MainChief();
    ~MainChief();

    virtual void buildDrink();
    virtual void buildFood();
};

#endif //_MAIN_CHIEF_