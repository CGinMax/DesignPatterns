#include <iostream>
#include <string>

#include "MealBuilder.h"

MealBuilder::MealBuilder()
{
    _meal = new Meal();
}
void MealBuilder::buildDrink()
{

}
void MealBuilder::buildFood()
{

}
MealBuilder::~MealBuilder(){}

Meal* MealBuilder::getMeal()
{
    return _meal;
}