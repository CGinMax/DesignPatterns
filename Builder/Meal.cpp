#include <iostream>
#include <string>
#include "Meal.h"

void Meal::setDrink(std::string drink)
{
    _drink = drink;
}
    
void Meal::setFood(std::string food)
{
    _food = food;
}

std::string Meal::getDrink()
{
    return _drink;
}

std::string Meal::getFood()
{
    return _food;
}

void Meal::showMeal()
{
    std::cout << "Your meal is " << _food << " and " << _drink << std::endl;
}