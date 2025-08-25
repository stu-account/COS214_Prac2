#include "order.h"

void Order::setDiscountStrategy(DiscountStrategy* strategy){
    this->discountStrategy = strategy;
}

double Order::calculateSubtotal(){
    double subtotal = 0;
    for (Pizza* pizza : pizzas) {
        subtotal+= pizza->getPrice();
    }
} 

double Order::calculateTotal(){
    return discountStrategy->applyDiscount(calculateSubtotal());
}