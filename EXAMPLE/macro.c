#include <stdio.h>

// Preprocessor
#define PI 3.1415
#define ADD(a, b) (a + b)
#define kg2lb(x) (x * 2.20462)
#define Kg2lb(x) ((x) * 2.20462)

int main() {
    double kg = 5;
    double kg2 = 6;
    printf("%d \n", ADD(1, 5));
    printf("%.2lf \n", kg2lb(kg2));
                      // kg + 1 * 2.20462 <- (x * 2.20462)
    printf("%.2lf \n", kg2lb(kg + 1));
                    // (kg + 1) * 2.20462 <- ((x) * 2.20462)
    printf("%.2lf \n", Kg2lb(kg + 1));

}