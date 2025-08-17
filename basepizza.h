#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "pizzacomponent.h"
#include "pizza.h"

class BasePizza : public Pizza{
private:
    PizzaComponent toppings;
public:
    BasePizza(PizzaComponent& toppings);
    ~BasePizza();
};


#endif