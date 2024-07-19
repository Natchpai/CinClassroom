#include <stdio.h>

double triangleArea(double b, double h) {
    return 0.5 * b * h;
}

void printOutAreaOfTriangle(double b, double h, double a) {
    printf("\t\t---------------------------\n");
    printf("\t\t      Area of Triangle     \n");
    printf("\t\t---------------------------\n");
    printf("\t\t   Area = 0.5xHeightxBase  \n");
    printf("\t\t---------------------------\n");
    printf("\t\t    Base(m.)   = %.2f\n", b);
    printf("\t\t    Height(m.) = %.2f\n", h);
    printf("\t\t    Area(m^2.) = %.2f\n", a);
    printf("\t\t---------------------------\n");
}

// int main(void) {
//     printOutAreaOfTriangle(2, 5, triangleArea(2, 5));
//     return 0;
// }




