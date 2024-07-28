#include <stdio.h>

void demo1() {
    char grade[4];
    grade[0] = 'A';
    grade[1] = 'B';
    grade[2] = 'C';
    grade[3] = 'D';
    printf("%c \n", grade[2]);
}

void demo2() {
    char grade[] = {'A', 'B', 'C', 'D'};
    printf("%c \n", grade[2]);
}

void demo3() {
    ///! The name of array is a pointer to the address of first char.
    char grade[] = {'A', 'B', 'C', 'D'};
    printf("%s \n", grade);

    char grade2[] = {'A', 'B', 'C', 'D', '\0'};
    printf("%s \n", grade2);

    char letter[] = "ABCD"; // A, B, C, D,\0    and letter is a pointer to the first character , is A
    printf("%s \n", letter); // %s

}

int main() {
    demo1();
    demo2();
    demo3();
}