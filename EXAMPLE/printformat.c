#include <stdio.h>

// integer
void intFormat() {
    int a1 = 10;
    int b1 = 5;

    printf("a = %d \n", a1);  // \n > new line
    printf("\t\t a = %d \n", a1);   // \t > tab
    printf("a = %5d \n", a1);
    printf("a = %05d \n", a1);  // padding zero
}

// floating point
void floatFormat() {

    /*
    * Length-modifiers
    *   %f for float
    *   %lf for double
    *   %Lf for long double

    *     It just so happens that when arguments of type float are passed as variadic parameters,
    * such arguments are implicitly converted to type double.
    * This is the reason why in printf format specifiers %f and %lf are equivalent and interchangeable.
    * In printf you can "cross-use" %lf with float or %f with double.
    *     But there's no reason to actually do it in practice.
    * Don't use %f to printf arguments of type double.
    * It is a widespread habit born back in C89/90 times, but it is a bad habit.
    * Use %lf in printf for double and keep %f reserved for float arguments.

    https://stackoverflow.com/questions/210590/why-does-scanf-need-lf-for-doubles-when-printf-is-okay-with-just-f

    */

    double e = 2.71828;

    printf("e = %f \n", e);
    printf("e = %.3f \n", e);
    printf("e = %10.2f \n", e);
}

// character
void charFormat() {
    char ch = 'Z';
    printf("%c (%d) \n", ch, ch);
    printf("Z in hexadecimal is %x, %X, %#X \n", ch, ch, ch);

    int ch1 = 90;
    printf("%c (%d) \n", ch, ch);

}

// string
void strFormat() {
    char *str1 = "Python";
    printf("|%s| \n", str1);
    printf("|%10s| \n", str1);
    printf("|%-10s| \n", str1);
}


void address() {
    int i = 10;
    printf("i = %d (%p) \n", i, &i); // & is an ampersand (AND)

    char *str = "Python";
    char str1[] = "Python";
    printf("str = %s (%p) \n", str, str);
    printf("str1 = %s (%p) \n", str1, str1);
    printf("str1[%d] = %c (%p) \n", 0, str1[0], &str1[0]);
    printf("str1[%d] = %c (%p) \n", 2, str1[2], &str1[2]);

}


int main() {
    intFormat();
    floatFormat();
    charFormat();

    printf("How to print %c \n", '%');
    printf("How to print %% \n");
    // strFormat();
    // address();
}