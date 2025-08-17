#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "pizza.h"

class PizzaDecorator : Pizza {
private:
    Pizza pizza;
public:
    PizzaDecorator(const Pizza& pizza);
    ~PizzaDecorator();
};



#endif
