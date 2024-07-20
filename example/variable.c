// variable scope

#include <stdio.h>
#include <math.h>

// global variable
int a = 10;

void function_1() {
    // local variable
    int a = 58;
    printf("%d \n", a);
}

void function_2() {
    printf("%d \n", a);
}

int main() {
    function_1();
    function_2();
}
