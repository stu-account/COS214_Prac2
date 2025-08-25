#include "menus.h"

void Menus::addObserver(Observer* observer) {
    this->observers.push_back(observer);
}

void Menus::removeObserver(Observer* observer){
    //remove
}
void Menus::addPizza(Pizza* pizza){
    this->pizzas.push_back(pizza);
    this->notifyObservers();
}
void Menus::removePizza(Pizza* pizza){
    //remove pizza
}