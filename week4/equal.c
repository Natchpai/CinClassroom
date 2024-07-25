#include <stdio.h>

int main() {
    int a, b;
    printf("Input A = ");
    scanf("%d", &a);
    printf("Input B = ");
    scanf("%d", &b);

    // printf("%s", (a == b) ? "A is equal B" : "A is not equal B");
    if ( a == b) {
        printf("A is equal B");
    }
    else {
        printf("A is not equal B");
    }
}