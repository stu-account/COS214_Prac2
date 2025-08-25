#ifndef ORDERSTATE_H
#define ORDERSTATE_H

#include "pizza.h"
#include "order.h"

class OrderState
{
    public:
        virtual void addPizza(Order* order, Pizza* p) = 0;
        virtual void confirmOrder(Order* order) = 0;
        virtual void prepareOrder(Order* order) = 0;
        virtual void completeOrder(Order* order) = 0;
        virtual void cancelOrder(Order* order) = 0;
        virtual ~OrderState();
};

#endif