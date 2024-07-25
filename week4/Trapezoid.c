#include <stdio.h>

void printFormat() {
    printf("--------------------------------- \n");
    printf("        Volume of Pyramid         \n");
    printf("--------------------------------- \n");
    printf("   volume = (1/2) * h * (a + b)   \n");
    printf("--------------------------------- \n");
}

void getOption(int *select) {
    printf("    1.) Calculate     \n");
    printf("    2.) Exit          \n");
    printf("    Please select : ");
    scanf("%d", select);
}

double cal_trapezoid(double h, double a, double b) {
    return (.5 * h * (a + b));
}

void getInput(double *h, double *a, double *b) {
    printf("--------------------------------- \n");
    printf("   Height = ");
    scanf("%lf", h);

    printf("   Parallel side A = ");
    scanf("%lf", a);

    printf("   Parallel side B = ");
    scanf("%lf", b);
    printf("---------------------------------- \n");
}

int main() {
    double area, h, a, b;
    int select;

    printFormat();

    getOption(&select);
    if( select == 1 ) {
        getInput(&h, &a, &b);
        area = cal_trapezoid(h, a, b);
        printf("   Area (m^2) = %.2lf \n", area);
        return 0;
    }
    else {
        printf("------------ Thank you------------ \n");
        return 0;
    }
}