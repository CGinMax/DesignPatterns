#include <iostream>
#include "Meal.h"
#include "MealBuilder.h"
#include "LitteChief.h"
#include "MainChief.h"
#include "KFCWaiter.h"

int main(int argc, char **argv)
{
    MealBuilder *mealBuilder = nullptr;
    KFCWaiter waiteress;
    mealBuilder = new LitteChief();
    waiteress.setMealBuilder(mealBuilder);
    
    Meal *meal = nullptr;
    meal = waiteress.construct();
    meal->showMeal();

    delete meal;
    delete mealBuilder;

    mealBuilder = new MainChief();
    waiteress.setMealBuilder(mealBuilder);

    meal = waiteress.construct();
    meal->showMeal();

    delete meal;
    delete mealBuilder;
    return 0;
}
