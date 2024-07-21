#include <stdio.h>

void demo1(int a, int *b) {
    a = a + 1;
    *b = *b + 1;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void upper(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = (char) (*c - ('a' - 'A'));
    }
}

int main() {
    int m = 5, n = 10;
    demo1(m, &n);
    printf("m=%d, n=%d \n", m, n);
    swap(&m, &n);
    printf("m=%d, n=%d \n", m, n);

    char ch = 'g';
    upper(&ch);
    printf("g = %c", ch);

}