#include "toppinggroup.h"

ToppingGroup::ToppingGroup() : PizzaComponent(0.0, "ToppingGroup"){
    
}

ToppingGroup::~ToppingGroup() {
}

void ToppingGroup::add(PizzaComponent* component) {
    toppings.push_back(component);
}

std::string ToppingGroup::getName() const {
    return "No individual name, this is a group";
}

double ToppingGroup::getPrice() const {
    double total = 0;
    // const auto&
    for (PizzaComponent* topping : toppings) {
        total += topping->getPrice();
    }
    return total;
}


