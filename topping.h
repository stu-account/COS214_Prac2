#ifndef TOPPING_H
#define TOPPING_H

#include "pizzacomponent.h"

class Topping : public PizzaComponent{
private:
    
public:
    Topping(double price, std::string name);
    ~Topping();
    // std::string getName() override;
    // double getPrice() override;
};

#endif