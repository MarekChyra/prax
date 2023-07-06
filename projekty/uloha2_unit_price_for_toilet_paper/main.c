#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float unit_price(const float pack_price, const int rolls_count,
                 const int pieces_count) {
  return roundf((pack_price / (rolls_count * pieces_count)) * 10000) / 100;
}

int main() {

  printf("%.4f\n", unit_price(5.63, 20, 200));

  return 0;
}
