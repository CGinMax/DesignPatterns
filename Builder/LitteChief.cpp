#include <iostream>
#include "LitteChief.h"

LitteChief::LitteChief()
{

}

LitteChief::~LitteChief()
{}

void LitteChief::buildDrink()
{
    _meal->setDrink("Cocal");
    std::cout << "The litte chief build cocal" << std::endl;
}

void LitteChief::buildFood()
{
    _meal->setFood("tomato");
    std::cout << "The litte chief build tomato" << std::endl;
}