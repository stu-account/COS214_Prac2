#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include "discountstrategy.h"

class RegularPrice : public DiscountStrategy 
{
    public:
        double applyDiscount(double subtotal) override;
    private:
        const double discount = 0;

};

#endif