#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES
#include <math.h>

double velocityCal(double d, double t) {
    return d * 2 * M_PI / t;
}

void printFormat() {
    printf("------------------------------\n");
    printf("     Velocity Calculation     \n");
    printf("------------------------------\n");
    printf("     v = distance / time      \n");
    printf("------------------------------\n");
}


int main() {

    system("cls");

    double d, t, v;

    printFormat();
    printf("  Distance (m) = ");
    scanf("%lf", &d);

    printf("      Time (s) = ");
    scanf("%lf", &t);

    v = velocityCal(d, t);
    printf("Velocity (m/s) = %.2lf \n", v);
    printf("------------------------------\n");

}