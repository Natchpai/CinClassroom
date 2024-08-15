#include <stdio.h>
#include <stdlib.h>

void pr_menu() {
    printf("--------------------\n");
    printf(" Geometry           \n");
    printf("    1. Area         \n");
    printf(" Linear Transform   \n");
    printf("    2. Matrix       \n");
    printf("--------------------\n");
    printf(" Actions            \n");
    printf("    3. Back <       \n");
    printf("    4. Exit         \n");
    printf("--------------------\n");
}

void pr_area() {
    printf("--------------------\n");
    printf(" The Area of        \n");
    printf("    1. Circle       \n");
    printf("    1. Triangle     \n");
    printf("--------------------\n");
    printf(" Actions            \n");
    printf("    3. Back <       \n");
    printf("    4. Exit         \n");
    printf("--------------------\n");
    printf(" Please select : ");
}

void getInput(double *dest, char *txt) {
    printf("%s", txt);
    scanf("%lf", dest);
}

void circle_cal() {
    double r, a;
    double PI = 3.1415;
    system("clear");
    printf("---- Area of Circle ----- \n");
    printf("     Area = PI * r * r    \n");
    printf("------------------------- \n");

    getInput(&r, "     Radius (m) = ");
    a = PI * r * r;
    printf("     Area (m^2) = %.2lf \n", a);
    printf("------------------------- \n");
}

void geometry(int *out) {
    int dmp;
    pr_area();
    scanf("%d", &dmp);
    if(dmp == 1) { 
        circle_cal();
        printf(" Do you want to continue (1)  : ");
        scanf("%d", &dmp);
        if(dmp == 1) {
            *out = 1; // 1 : continue
        }else{
            system("clear");
            printf("Something is wrong! > Back to Main Menu \n");
            *out = 5; // 5 : back to main menu
        }
    }
    else if(dmp == 3) { 
        *out = 5; // 5 : back to main menu
    }
    else if(dmp == 4) { 
        *out = 10; // 10 : exit
    }

    
}

void matrix(int *out) {
    int dmp;
    printf(" Do you want continue (1)");
    printf(" Matrix back (5) : ");
    scanf("%d", &dmp);
    if(dmp == 1) {
        *out = 1;
    }
    else if(dmp == 5) {
        *out = 5;
    }


}

void sweepOp(int *s, int *out) {
    system("clear");
    pr_menu();
    printf(" Please select : ");
    scanf("%d", s);
    switch(*s) {
        case 1:
            system("clear");
            geometry(out);
            break;
        case 2:
            system("clear");
            matrix(out); // 2 back
            break;
        case 3:
            system("clear");
            *out = 10; // exit
            break;
        case 4:
            *out = 10;
            break;
    }
}

int main() {
    int select_to = 0;
    int action = 1;
    int loop = 0;
    sweepOp(&select_to, &action);
    do {
        if(action == 10) {
            printf(" END PROCESS ");
            return 0;
        }
        if(action == 5 || action == 1) {
            system("clear");
            sweepOp(&select_to, &action);
        }
    } while(loop == 0);
}