#include <stdio.h>
#include <string.h>

void demo() {
    char a[] = "bloom";
    char b[10] = "lily";
    char c[100];
    char *d = "sunlight";

    strcpy(c, a);
    printf("a = %s (%p) \n", a, a);
    printf("c = %s (%p) \n", c, c);

    a[0] = 'B';
    printf("a = %s (%p) \n", a, a);
    printf("c = %s (%p) \n", c, c);

    //! Undefined behavior , but in spacial case
    strcpy(a, "sunflower"); // char a[] = "bloom"
    printf("Undefined behavior \n");
    printf("a = %s (%p) \n", a, a);


}

int main() {
    demo();
}