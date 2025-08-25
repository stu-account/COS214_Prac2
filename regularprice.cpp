#include "regularprice.h"

double RegularPrice::applyDiscount(double subtotal) {
    return subtotal - (subtotal * discount);
}