#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES
#include <math.h>

double cirCal(double r) {
    return M_PI * pow(r, 2);
}

void printFormat() {
    printf("------------------------\n");
    printf("     Area of Circle     \n");
    printf("------------------------\n");
    printf("    Area = Pi * R^2     \n");
    printf("------------------------\n");
}

int main() {

    // system("cls");

    double r, Area;

    printFormat();
    printf(" Radius (m) = ");
    scanf("%lf", &r);

    Area = cirCal(r);
    printf(" Area (m^2) = %.2lf \n", Area);

    printf("------------------------\n");
}