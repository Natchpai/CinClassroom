// greatest common divisor by Euclidean algorithm

#include <stdio.h>


int gcd_simple(int a, int b) {
    int count = 0;
    int min = (a < b)? a : b;

    for(int i = min; i >= 1; i--) {
        count++;
        if (a % i == 0 && b % i == 0) {
            printf("round: %d \n", count);
            return i;
        }
    }
}


int gcd_Euclid(int a, int b) {
    int count = 0;
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
        count++;
    }
    printf("round: %d \n", count);
    return a;
}

int main() {
    int a = 700;
    int b = 990;

    printf("Ans: %d \n",gcd_simple(a, b));
    printf("Ans: %d \n",gcd_Euclid(a, b));
}