#ifndef _MEALBUILDER_
#define _MEALBUILDER_

#include "Meal.h"

class MealBuilder{
public:
    MealBuilder();
    virtual void buildDrink();
    virtual void buildFood();
    virtual ~MealBuilder();
    virtual Meal* getMeal();

protected:
    Meal *_meal;
};

#endif