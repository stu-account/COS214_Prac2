#include "bulkdiscount.h"

double BulkDiscount::applyDiscount(double subtotal) {
    return subtotal - (subtotal * discount);
}