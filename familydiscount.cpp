#include "familydiscount.h"

double FamilyDiscount::applyDiscount(double subtotal) {
    return subtotal - (subtotal * discount);
}