#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H

#include "discountstrategy.h"

class BulkDiscount : public DiscountStrategy 
{
    public:
        double applyDiscount(double subtotal) override;
    private:
        const double discount = 0.10;

};

#endif