#include "topping.h"


Topping::Topping(double price, std::string name) : PizzaComponent(price, name){

}


Topping::~Topping() {

}

// std::string Topping::getName() {
//     /* manje what happens when we're returning a private attribute from the parent class? */
//     return PizzaComponent::getName();
// }

// double Topping::getPrice() {
//     return PizzaComponent::getPrice();
// }
//wait, these aren't compulsory overrides


