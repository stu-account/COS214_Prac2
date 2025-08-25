#include "pizzadecorator.h"

PizzaDecorator::PizzaDecorator(Pizza* pizza) : pizza(pizza)
{
}

PizzaDecorator::~PizzaDecorator()
{
}

double PizzaDecorator::getPrice()
{
    return this->pizza->getPrice();
}

std::string PizzaDecorator::getName() 
{
    return this->pizza->getName();
}