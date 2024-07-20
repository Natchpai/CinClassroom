// variable scope

#include <stdio.h>
#include <math.h>

// global variable
double PI = 3.141592653;
int a = 10;

void function_1() {
    // local variable
    int a = 58;
    printf("%d", a);
}

void function_2() {
    printf("%d", a);
}

int main() {
    function_1();
    function_2();
}
