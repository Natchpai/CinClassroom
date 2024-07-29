#include <stdio.h>
#include <ctype.h>

int main() {
    double a = 3.1415;
    printf("%lf \n", a);
    // casting
    int c = (int) a; // int b = a;

    printf("%d \n", c);

    double d;

    // casting
    d = (double) c;

    printf("%lf \n", d);

    char p[] = "abc";
    for (int i = 0; i < 3; i++)
    {
        p[i] = (char)toupper(p[i]); // BC toupper() will return am interger
    }
    printf("%s \n", p);
}