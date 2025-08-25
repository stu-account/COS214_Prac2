#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

class DiscountStrategy
{
    public:
        virtual double applyDiscount(double subtotal) = 0;
};

#endif