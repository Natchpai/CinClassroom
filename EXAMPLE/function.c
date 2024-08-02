#include <stdio.h>


//! ไม่ส่งค่าออก  ไม่รับค่าเข้า
void pf123(void) {
    printf("--------------------------------- \n");
    printf("        Volume of Pyramid         \n");
    printf("--------------------------------- \n");
    printf("    volume = (1/3) * w * h * l    \n");
    printf("--------------------------------- \n");
    printf("    1.) Calculate     \n");
    printf("    2.) Exit          \n");
    printf("    Please select : ");
}




//! ส่งค่าออก  ไม่รับค่าเข้า
int demo(void) {
}

//! ส่งค่าออก  รับค่าเข้า
int demo2(int a) {
}





//! ไม่ส่งค่าออก  รับค่าเข้า
void display(double volume, double area) {
    printf("   Volume (m^3) = %.2lf \n", volume);
    printf("   Volume (m^3) = %.2lf \n", area);
    area = volume / 2;
    printf("   Volume (m^3) = %.2lf \n", area);
}

//! ไม่ส่งค่าออก  รับค่าเข้า
void AplusB(int a, int b) {
    printf("a + b = %d", a + b);
}

//! ส่งค่าออก  รับค่าเข้า
int AplusB_v2(int a, int b) {
    int result;
    result = a + b;
    return result;
}

int main(void) {
    int a = 40; int b = 18;
    int result;


    printf("%d", AplusB_v2(a, b));

    return 0;
}