#include <stdio.h>
#include <limits.h>
#include <math.h>

void demo1() {
    int a[] = {10, 15, 20, 25};
    int *p = a;
//    int *p = &a[0];
    printf("sizeof(int) = %zu\n", sizeof(int));
    //size of int is 4 byte, 32 bits
    // if pointer of int is plus 1, pointer of int + 4 byte(size of int)

    printf("*p = %d\n", *p); // 10

    printf("*(p + 2) = %d\n", *(p + 2)); // 20

    for (int i = 0; i < 4; ++i) {
        printf("&a[%d]   = %p, a[%d]     = %d\n", i, &a[i], i, a[i]);
        printf("(p + %d) = %p, *(p + %d) = %d\n", i, p + i, i, *(p + i));
        printf("----------------\n");
    }
}

void demo2() {
//    char a[] = {'I', 'R', 'O', 'N'};
    char *a = "IRON";
    char *p = a;
//    int *p = &a[0];
    printf("sizeof(char) = %zu\n", sizeof(char));
    // size of char is 1 byte, 8 bits
    // if pointer of char is plus 1, pointer of char + 1 byte(size of char)

    printf("*p = %c\n", *p); // I

    printf("*(p + 2) = %c\n", *(p + 2)); // O

    for (int i = 0; i < 4; ++i) {
        printf("&a[%d]   = %p, a[%d]     = %c\n", i, &a[i], i, a[i]);
        printf("(p + %d) = %p, *(p + %d) = %c\n", i, p + i, i, *(p + i));
        printf("----------------\n");
    }
}

int main() {
    printf("%d\n", UCHAR_MAX);
    printf("%lf\n", pow(2, 31) - 1);
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
    printf("%lf\n", pow(2, 32) - 1);
    printf("%u\n", UINT_MAX);
    demo1();
    demo2();
    return 0;
}