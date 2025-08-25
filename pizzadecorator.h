#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "pizza.h"

class PizzaDecorator : Pizza {
private:
    Pizza* pizza;
public:
    PizzaDecorator(Pizza* pizza);
    ~PizzaDecorator();
    double getPrice() override;
    std::string getName() override;
};



#endif
