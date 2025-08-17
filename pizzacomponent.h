#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>

class PizzaComponent
{
private:
    double price;
    std::string name;

public:
    PizzaComponent(double price, std::string name);
    virtual ~PizzaComponent();
    virtual std::string getName();
    virtual double getPrice();
};

#endif
