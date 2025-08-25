/*This will act as the context for our strategy*/
#ifndef ORDER_H
#define ORDER_H

#include "pizza.h"
#include "discountstrategy.h"

#include <vector>

class Order
{
    private:
        std::vector<Pizza*> pizzas;
        DiscountStrategy* discountStrategy;
    public:
        void setDiscountStrategy(DiscountStrategy* strategy);
        double calculateSubtotal();
        double calculateTotal();
};

#endif