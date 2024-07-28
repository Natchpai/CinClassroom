#include <stdio.h>

void display1(char *s[]) {
    for (int i = 0; i < 3; i++)
    {
        printf("%p is store: %p is store: %c => %s \n",&s[i], s[i], s[i][0], s[i]);
    }
}

void display3(char *s[], char **t) { // char **t is a pointer to character pointer
    printf("s     t        = %10p %10p \n", s, t);          //  pointer (t) store the address of char pointer
    printf("&s[0] t + 0    = %10p %10p \n", &s[0], t + 0);  //  t + 0 = t
    printf("&s[1] t + 1    = %10p %10p \n", &s[1], t + 1);  //  t + 1 is the next address of t
    printf("s[0]  *t       = %10p %10p \n", s[0], *t);      // char pointer store the address of char
    printf("s[0]  **t      = %10c %10c \n", s[0][0], **t);  // dereference the address of char
    printf("s[0]  *t       = %10s %10s \n", s[0], *t);      // The %s must pass the address value of first char
    printf("s[1]  *(t + 1) = %10p %10p \n", s[1], *(t + 1)); // The Next address of address store the char pointer
    printf("s[1]  *(t + 1) = %10s %10s \n", s[1], *(t + 1));

    for (int i = 0; i < 3; i++)
    {
        printf("%p is store: %p is store: %c => %s \n",t, *t, **(t + i), *(t + i));
    }
}


void display2(char **s, size_t size) {
    for (int i = 0; i < size; i++)
    {
        printf("%s \n", *(s + i));
    }
}
// same
void display2v2(char *s[], size_t size) {
    for (int i = 0; i < size; i++)
    {
        printf("%s \n", s[i]);
    }
}

void demo1() {
    // declare array of string
    char *flower[] = {"carnation", "rose", "tulip"};
    // display1(flower);

    size_t size = sizeof(flower) / sizeof(flower[0]);


    display2(flower, size);
    display2v2(flower, size);
    // display3(flower, flower);

}



int main() {
    demo1();
}