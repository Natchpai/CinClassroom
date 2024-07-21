#include <stdio.h>
#include <math.h>

typedef struct {
    double x1, x2;
} Xtype;

Xtype solEq(double a, double b, double c) {
    Xtype ans;
    double discriminant = (b * b) - (4 * a * c);
    ans.x1 = (-b + sqrt(discriminant)) / (2 * a);
    ans.x2 = (-b - sqrt(discriminant)) / (2 * a);
    return ans;
}

int main(void) {

    double abc[] = {2, 4, -4};

    Xtype ans = solEq(abc[0], abc[1], abc[2]);

    printf("%.2fx^2+(%.2fx)+(%.2f), x = %.2f, %.2f \n", abc[0], abc[1], abc[2], ans.x1, ans.x2);

}