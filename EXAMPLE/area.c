#include <stdio.h>

void atest() {
    printf("----- area of tri- --- \n");
}


double triangleArea_cal(double w, double h)  //! area = 0.5 * w * h
{
    atest();
    return (0.5 * w * h);
}

int main(void) {

    printf("%.1f \n", triangleArea_cal(2.0, 11.2));
    printf("%.1f \n", triangleArea_cal(3.0, 11.2));
    printf("%.1f \n", triangleArea_cal(12.0, 11.2));
    printf("%.1f \n", triangleArea_cal(32.0, 11.2));
    printf("%.1f \n", triangleArea_cal(272.0, 11.2));
    return 0;
}