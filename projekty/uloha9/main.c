#include <stdio.h>
#include <stdlib.h>

int special_numbers(const int input_array[], const int array_size,
                    int result_array[]) {
  int k = 0;
  int sucet = 0;

  for (int i = 0; i < array_size; i++) {
    sucet = 0;

    for (int j = i + 1; j < array_size; j++) {
      sucet = sucet + input_array[j];
    }

    if (input_array[i] > sucet) {
      result_array[k] = input_array[i];
      k++;
    }
  }

  return k;
}

int main() {
  int input_array[] = {16, 17, 4, 3, 5, 2};
  int result_array[6];
  int count = special_numbers(input_array, 6, result_array);

  for (int i = 0; i < count; i++) {
    printf("%d ", result_array[i]);
  }
  printf("\n");

  return 0;
}
