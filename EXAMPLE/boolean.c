#include "boolean.h"
#include <stdbool.h>

bool a = true;

bool funcEven(int x) {
    return ((x % 2) == 0) ? true : false;
}

bool funcOdd(int x) {
    return ((x % 2) == 1) ? true : false;
}

// int main(void) {
//     printf("%d", funcEven(16));
// }
