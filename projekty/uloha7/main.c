#include <stdio.h>
#include <stdlib.h>

int array_min(const int input_array[], const int array_size) {
  int min = 0;

  for (int i = 1; i < array_size; i++) {
    if (min > input_array[i]) {
      min = input_array[i];
    }
  }

  return min;
}

int array_max(const int input_array[], const int array_size) {
  int max = 0;

  for (int i = 1; i < array_size; i++) {
    if (max < input_array[i]) {
      max = input_array[i];
    }
  }

  return max;
}

int main() {
  int input_array[] = {1, 2, 3, 4, 5};

  printf("min: %d\nmax: %d\n", array_min(input_array, 5),
         array_max(input_array, 5));

  return 0;
}
