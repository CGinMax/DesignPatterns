#include <iostream>
#include "KFCWaiter.h"

KFCWaiter::KFCWaiter()
{

}

KFCWaiter::~KFCWaiter(){}

Meal* KFCWaiter::construct()
{
    _builder->buildDrink();
    _builder->buildFood();

    return _builder->getMeal();
}

void KFCWaiter::setMealBuilder(MealBuilder *builder)
{
    _builder = builder;
}
