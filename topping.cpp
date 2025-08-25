#include "topping.h"


Topping::Topping(double price, std::string name) : PizzaComponent(price, name){

}


Topping::~Topping() {

}

std::string Topping::getName() const {
    return this->name;
}

double Topping::getPrice() const {
    return this->price;
}