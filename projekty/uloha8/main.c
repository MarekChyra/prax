#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long special_counter(const int input_array[], const int array_size) {
    int i;
    int output_array[] = {0};

    for (i=0;i<array_size;i++) {
        if (i%2 == 1) {
            output_array[i] = input_array[i]*input_array[i];
        }
        else {
            output_array[i] = input_array[i];
        }
    }

    for (i=0;i<array_size;i++) {
        printf("%d\n", output_array[i]);
    }
}

int main() {
    int i;
    int input_array[] = {11,12,13,14,15};

    special_counter(input_array, 5);

    return 0;
}