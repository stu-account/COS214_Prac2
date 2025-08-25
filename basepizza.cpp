#include "basepizza.h"

BasePizza::BasePizza(PizzaComponent* toppings) {
    //should i make deep copies?
    this->toppings = toppings;
}

BasePizza::~BasePizza() {

}

std::string BasePizza::getName(){
    return "Base Pizza + " + toppings->getName();
}

double BasePizza::getPrice() {
    return 50 + toppings->getPrice();
}