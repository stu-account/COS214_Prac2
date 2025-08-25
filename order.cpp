#include "order.h"

Order::Order(OrderState* initialState, DiscountStrategy* initialDiscount) {
    //not implemented yet
}

Order::~Order() {
    //not implemented yet
}

void Order::setDiscountStrategy(DiscountStrategy* strategy){
    this->discountStrategy = strategy;
}

double Order::calculateSubtotal(){
    double subtotal = 0;
    for (Pizza* pizza : pizzas) {
        subtotal+= pizza->getPrice();
    }
    return subtotal;
} 

double Order::calculateTotal(){
    return discountStrategy->applyDiscount(calculateSubtotal());
}

void Order::addPizza(Pizza* pizza) {
    this->pizzas.push_back(pizza);
}

void Order::setState(OrderState* newState) {
    if (this->state) delete this->state;
    this->state = newState;
}

void Order::confirmOrder() {
    this->state->confirmOrder(this);
}

void Order::prepareOrder() {
    this->state->prepareOrder(this);
}

void Order::completeOrder() {
    this->state->completeOrder(this);
}

void Order::cancelOrder() {
    this->state->cancelOrder(this);
}