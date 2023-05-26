#include <stdio.h>
#include <stdlib.h>

void counter(const int input_array[], const int array_size, int result_array[2]) {
    int i;
    result_array[0] = 0;
    result_array[1] = 0;

    for (i = 0; i < array_size; i++) {
        if (i%2 == 0) {
        result_array[0] = result_array[0] + input_array[i];
        }
        else {
        result_array[1] = result_array[1] + input_array[i];
        }
    }

    printf("%d %d \n", result_array[0], result_array[1]);
}

int main() {
    int input_array[] = {1, 2, 3, 4, 5};
    int result_array[2];

    counter(input_array, 5, result_array);
    
    return 0;
}