#include <stdio.h>

void func1() {
    int a = 10, b = 20;
    int max;

    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }

    printf("max is %d \n", max);
}

void func2() {
    int a = 10, b = 21;
    int max;

    // ternary operation
    max = (a > b) ? a : b;

    printf("max is %d \n", max);

    printf("min is %d \n", a < b ? a : b);
}

int main() {
    func1();
    func2();
}