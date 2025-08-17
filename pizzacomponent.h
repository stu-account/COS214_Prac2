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
    virtual std::string getName() = 0;
    virtual double getPrice() = 0;
};

#endif
