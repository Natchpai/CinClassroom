#include <stdio.h>

int main() {
    double a = 3.1415;
    printf("%lf \n", a);
    // casting
    int c = (int) a; // int b = a;

    printf("%d \n", c);

    double d;

    // casting
    d = (double) c;

    printf("%lf \n", d);
}