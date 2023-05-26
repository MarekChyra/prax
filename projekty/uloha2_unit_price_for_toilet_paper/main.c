#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float unit_price(const float pack_price, const int rolls_count, const int pieces_count) {
    float price_for_unit;

    price_for_unit = pack_price / (rolls_count * pieces_count);
    price_for_unit = price_for_unit * 100;
    price_for_unit = roundf(price_for_unit * 100) / 100;
    
    return price_for_unit;
}

int main () {

    printf("%.4f\n", unit_price(5.63, 20, 200));

    return 0;
}