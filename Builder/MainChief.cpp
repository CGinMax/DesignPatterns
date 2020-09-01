#include <iostream>
#include "MainChief.h"

MainChief::MainChief()
{

}

MainChief::~MainChief(){}

void MainChief::buildDrink()
{
    _meal->setDrink("Ice juice");
    std::cout << "The main chief build ice juice" << std::endl;
}

void MainChief::buildFood()
{
    _meal->setFood("hambeger");
    std::cout << "The main chief build hambeger" << std::endl;
}