#include <stdio.h>

void printFormat() {
    printf("--------------------------------- \n");
    printf("        Volume of Pyramid         \n");
    printf("--------------------------------- \n");
    printf("    volume = (1/3) * w * h * l    \n");
    printf("--------------------------------- \n");
    printf("    1.) Calculate     \n");
    printf("    2.) Exit          \n");
    printf("    Please select : ");
}

double cal_pyramid(double w, double h, double l) {
    return (1.0/3.0) * w * h * l;
}

int main() {
    double volume, w, h ,l;
    int select;

    printFormat();
    scanf("%d", &select);

    if ( select == 1) {
        printf("--------------------------------- \n");
        printf("   height = ");
        scanf("%lf", &h);

        printf("    width = ");
        scanf("%lf", &w);

        printf("   lenght = ");
        scanf("%lf", &l);
        printf("---------------------------------- \n");
        volume = cal_pyramid(w, h, l);
        printf("   Volume (m^3) = %.2lf \n", volume);
    }
    else {
        printf("            Thank you!             \n");
        printf("---------------------------------- \n");
        return 0;
    }
    
}