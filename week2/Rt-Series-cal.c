#include <stdio.h>

int main(void) {
    float R1, R2, R3, RT;
    R1 = 20;
    R2 = 30;
    R3 = 10;
    RT = R1 + R2 + R3;
    printf("\t\t---------------------------\n");
    printf("\t\t   RT-Series Calculation   \n");
    printf("\t\t---------------------------\n");
    printf("\t\t     RT = R1 + R2 + R3     \n");
    printf("\t\t---------------------------\n");
    printf("\t\t     R1 (ohm) = %.2f\n", R1);
    printf("\t\t     R2 (ohm) = %.2f\n", R2);
    printf("\t\t     R3 (ohm) = %.2f\n", R3);
    printf("\t\t---------------------------\n");
    printf("\t\t     RT (ohm) = %.2f\n", RT);
    printf("\t\t---------------------------\n");
}