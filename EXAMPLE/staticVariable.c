#include <stdio.h>

void demo() {

    int n = 1;
    // static variable
    static int m = 1;

    for(int i=0; i<2; i++)
    {
        printf("n = %d, m = %d \n", n , m);
        n++; m++;
    }
    printf("end demo \n");
}

int main() {

    demo();

    demo();


}