/*This will act as the context for our strategy*/
/*Will also be the context for state*/
#ifndef ORDER_H
#define ORDER_H

#include "pizza.h"
#include "discountstrategy.h"
#include "orderstate.h"

#include <vector>

class Order
{
    private:
        OrderState* state; //state pattern
        std::vector<Pizza*> pizzas; //strategy 
        DiscountStrategy* discountStrategy;
    public:
        Order(OrderState* initialState, DiscountStrategy* initialStrategy);
        ~Order();

        void setState(OrderState* newState);
        OrderState* getState() const;

        void addPizza(Pizza* pizza);
        void confirmOrder();
        void prepareOrder();
        void completeOrder();
        void cancelOrder();

        void setDiscountStrategy(DiscountStrategy* strategy);
        double calculateSubtotal();
        double calculateTotal();

        
};

#endif