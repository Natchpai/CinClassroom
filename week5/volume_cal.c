#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

void getInput(double *dest, char *txt);
void pyramid(void);
void cylindrical(void);
void sphere(void);
void cone(void);

// main
int main(void) {
    int select;
    system("clear");
    printf("------------------------\n");
    printf("    Volume Calculate \n");
    printf("    1). Pyramid \n");
    printf("    2). Cylindrical \n");
    printf("    3). Sphere \n");
    printf("    4). Cone \n");
    printf("    5). Exit \n");
    printf("    Please select : ");
    scanf("%d", &select);

    switch (select) {   
    case 1: // Pyramid volume
        system("clear");
        pyramid();
        break;
    case 2: // Cylindrical volume
        system("clear");
        cylindrical();
        break;
    case 3: // Sphere volume
        system("clear");
        sphere();
        break;
    case 4: // Cone volume
        system("clear");
        cone();
        break;
    case 5: // Exit
        printf("------ Thank you ------ \n");
        printf("------------------------ \n");
        break;
    default: // Otherwise
        printf("--! Wrong Selection !-- \n");
        perror("----------------------- \n");
        break;
    }
    return 0;
}



void getInput(double *dest, char *txt) {
    printf("%s", txt);
    scanf("%lf", dest);
}

void pyramid(void) {
    double v, w, l, h;
    printf("----- Volume of Pyramid -----\n");
    printf("      V = (1/3) * w * l * h  \n");
    printf("-----------------------------\n");
    
    getInput(&w, "      Width  (m) = ");
    getInput(&l, "      Length (m) = ");
    getInput(&h, "      Height (m) = ");

    v = (1.0/3) * w * l * h;

    printf("      Volume (m^3) = %.2lf \n", v);
    printf("-----------------------------\n");
}

void cylindrical(void) {
    double v, r, h;
    printf("----- Volume of Cylindrical -----\n");
    printf("      V = PI * r^2 * h  \n");
    printf("---------------------------------\n");

    getInput(&r, "      Radius (m) = ");
    getInput(&h, "      Height (m) = ");

    v = PI * r * r * h;

    printf("      Volume (m^3) = %.2lf \n", v);
    printf("-----------------------------\n");
}

void sphere(void) {
    double v, r;
    printf("----- Volume of Sphere -----\n");
    printf("      V = (4/3) * PI * r^3 \n");
    printf("----------------------------\n");

    getInput(&r, "      Radius (m) = ");

    v = (4.0/3) * PI * r * r * r;

    printf("      Volume (m^3) = %.2lf \n", v);
    printf("-----------------------------\n");
}

void cone(void) {
    double v, r, h;
    printf("----- Volume of Cone-----------\n");
    printf("      V = (1/3) * PI * r^2 * h \n");
    printf("-------------------------------\n");

    getInput(&r, "      Radius (m) = ");
    getInput(&h, "      Height (m) = ");

    v = (1.0/3) * PI * r * r * h;

    printf("      Volume (m^3) = %.2lf \n", v);
    printf("-----------------------------\n");
}

