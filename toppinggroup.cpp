#include "toppinggroup.h"

ToppingGroup::ToppingGroup() : PizzaComponent(0.0, "ToppingGroup"){
    
}

ToppingGroup::~ToppingGroup() {
}

void ToppingGroup::add(const PizzaComponent& component) {
    toppings.push_back(component);

std::string ToppingGroup::getName() {

}

double ToppingGroup::getPrice() {
    double total = 0;
    for (const auto& topping : toppings) {
        total += topping.getPrice();
    }
    return total;
}

//yho so many errors, i'm tired