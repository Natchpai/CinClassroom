#include <stdio.h>


void demo1() {
    //! array 1D
    int number1D[] = {10, 3, 2, 51, 108, 90};

    //! array 2D
    int number2D[][3] = {
       //0, 1, 2
        {1, 3, 5},      // 0
        {10, 15, 19},   // 1
        {20, 21, 27},   // 2
        {35, 36, 39}    // 3
    };
                      // [row][column]
    printf("%d", number2D[2][2]);
}


void demo2() {

    for(int i = 0; i < 7; i = i + 1) {
        printf("%d ", i);
    }

    int a = 0;

    while(a < 3) {
        printf("%d ", a);
    }

}


int main() {
    demo2();
}