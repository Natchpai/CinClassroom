#include <stdio.h>

int main() {
    int n = 10;
    printf("n: %d (%p) \n", n, &n);

    int *p; // p is a pointer to integer
    char *c; // c is a pointer to character
    p = &n;
    printf("p  = %p \n", p);
    printf("*p = %d \n", *p); // *p -> dereferencing

    printf("-----------\n");
    n = 200;

    printf("n: %d (%p) \n", n, &n);
    printf("p  = %p \n", p);
    printf("*p = %d \n", *p);

    printf("-----------\n");
    *p = 50;
    printf("*p = %d \n", *p);
    printf("p  = %p \n", p);
    printf("n: %d (%p) \n", n, &n);

}