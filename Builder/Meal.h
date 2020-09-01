#ifndef _MEAL_
#define _MEAL_

#include <string>

class Meal{
public:
    Meal(){}

    void setDrink(std::string drink);
    
    void setFood(std::string food);

    std::string getDrink();

    std::string getFood();

    void showMeal();
private:
    std::string _food;
    std::string _drink;
};
#endif
