#include <stdio.h>
#include <stdlib.h>

void trojuholnik(int riadok) {
  unsigned long troj[riadok + 1][riadok + 1];

  for (int i = 0; i <= riadok; i++) {
    for (int j = 0; j <= riadok; j++) {
      if (j == 0) {
        troj[i][j] = 1;
      } else if (i == 0) {
        troj[i][j] = 1;
      } else {
        troj[i][j] = troj[i - 1][j] + troj[i][j - 1];
      }
    }
  }
  printf("%ld\n", troj[riadok][riadok]);
}

int main() {
  trojuholnik(33);

  return 0;
}
