#include <stdio.h>
#include <stdlib.h>

float lift_a_car(const float stick_lenght, const float human_weight, const float car_weight) {
    float r2, r1;

    r2 = stick_lenght * human_weight / (human_weight + car_weight); // dlzka tyce na strane auta

    return r2;
}

int main() {
    printf("%.4f\n", lift_a_car(2, 80, 1400));

    return 0;
}