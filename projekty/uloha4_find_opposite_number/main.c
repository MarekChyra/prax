#include <stdio.h>
#include <stdlib.h>

int opposite_number(const int n, const int number) {
    int opacne;

    if (number > n/2) {
        opacne = number - n/2;
    }
    else if (number < n/2) {
        opacne = number + n/2;
    }
    else {
        opacne = 0;
    }

    return opacne;
}

int main() {
    printf("%d\n", opposite_number(10,2));

    return 0;
}