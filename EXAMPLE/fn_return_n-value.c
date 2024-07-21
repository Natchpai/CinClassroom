#include <stdio.h>

typedef struct {
    double in, out;
} coorType;

coorType conjugate(double inCo) {
    coorType co;
    co.in = inCo * (1);
    co.out = inCo * (-1);
    return co;
}

int main() {

    coorType coordinate = conjugate(50.21);
    printf("%.2f* = %.2f", coordinate.in, coordinate.out);

}