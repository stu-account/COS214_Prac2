#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H

#include "discountstrategy.h"

class FamilyDiscount : public DiscountStrategy 
{
    public:
        double applyDiscount(double subtotal) override;
    private:
        const double discount = 0.15;

};

#endif