#include <stdio.h>

void demo1() {
    int n[] = {2, 4, 8};
    int *p[3];
    p[0] = &n[0];
    p[1] = &n[1];
    p[2] = &n[2];

    for (size_t i = 0; i < 3; i++)
    {
        printf(" n[%d] : %d \n", i, n[i]); // value in address
        printf("&n[%d] : %p \n", i, &n[i]); // pointer to address
        printf("*p[%d] : %d \n", i, *p[i]); // dereference
        printf(" p[%d] : %p \n", i, p[i]);
    }

}

void demo2() {
    char *s[] = {"lily", "rose", "tulip"}; // array store a pointer to character
    for (size_t i = 0; i < 3; i++)
    {
        printf("%s (%p)\n", s[i], s[i]); // via address to format specifiers (%s) to string
    }

}

int main() {
    demo1();
    demo2();
}