#ifndef _KFCWAITER_
#define _KFCWAITER_

#include "MealBuilder.h"

class KFCWaiter{
public:
    KFCWaiter();
    ~KFCWaiter();

    Meal* construct();
    void setMealBuilder(MealBuilder *builder);

private:
    MealBuilder *_builder;
};

#endif//_KFCWAITER_