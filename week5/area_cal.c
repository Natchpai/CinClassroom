#include <stdio.h>
#include <stdlib.h>

void getInput(double *dest, char *txt) {
    printf("%s", txt);
    scanf("%lf", dest);
}

void circleCal() {
    double r, a;
    double PI = 3.1415;

    printf("---- Area of Circle ----- \n");
    printf("     Area = PI * r * r    \n");
    printf("------------------------- \n");

    getInput(&r, "     Radius (m) = ");
    a = PI * r * r;
    printf("     Area (m^2) = %.2lf \n", a);
    printf("------------------------- \n");
}

void triangleCal() {
    double a, h, w;

    printf("---- Area of Triangle ----- \n");
    printf("     Area = 0.5 * w * h    \n");
    printf("--------------------------- \n");

    getInput(&w, "     width (m) = ");
    getInput(&h, "     height (m) = ");
    a = .5 * w * h;
    printf("     Area (m^2) = %.2lf \n", a);
    printf("--------------------------- \n");
}

int main() {
    int select;
    system("clear");
    printf("------------------------\n");
    printf("    Menu Selection \n");
    printf("    1). Circle \n");
    printf("    2). Triangle \n");
    printf("    3). Exit \n");
    printf("    Please select : ");
    scanf("%d", &select);

    switch (select) {
        case 1:
            system("clear");
            circleCal();
            break;
        case 2:
            system("clear");
            triangleCal();
            break;
        case 3:
            printf("----- Thank you ----- \n");
            break;
        default:
            printf("----- Wrong Selection ----- \n");
            break;
    }
}