#include <stdio.h>

void selectA() {
    char s;
    printf("select a to c : ");
    scanf("%c", &s);
    switch (s) {
        case 'a':
            printf("a is 10");
            break;

        case 'b':
            printf("b is 20");
            break;

        case 'c':
            printf("c is 30");
            break;

        default:
            printf("Please select a b c");
            break;
    }
}

int main() {
    selectA();
    return 0;
}