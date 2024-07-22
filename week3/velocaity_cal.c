#include <stdio.h>
#include <stdlib.h>

double velocityCal(double d, double t) {
    return d / t;
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

    printf("  Time (s) = ");
    scanf("%lf", &t);

    v = velocityCal(d, t);

    printf("  Velocity (m/s) = %.2f", v);

}