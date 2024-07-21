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