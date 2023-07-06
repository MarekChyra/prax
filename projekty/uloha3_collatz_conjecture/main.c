#include <stdio.h>
#include <stdlib.h>

void pocitanie(int number) {
  int count = 1;
  while (number != 1) {
    if (number % 2 == 0) {
      number = number / 2;
    } else {
      number = number * 3 + 1;
    }
    count++;
  }
  printf("%d\n", count);
}

int main() {
  pocitanie(35);
  return 0;
}
