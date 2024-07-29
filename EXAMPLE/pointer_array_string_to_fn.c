#include <stdio.h>

void display1(char *s[]) {


    for (int i = 0; i < 3; i++)
    {
        printf("%p is store: %p is store: %c => %s \n",&s[i], s[i], s[i][0], s[i]);
    }
}

void display2(char *s[], size_t size) {
    for (int i = 0; i < size; i++)
    {
        printf("%s \n", s[i]);
    }
}

void demo1() {
    // declare array of string
    char *flower[] = {"carnation", "rose", "tulip"};
    display1(flower);

    // size_t size = sizeof(flower) / sizeof(flower[0]);
    // display2(flower, size);
}



int main() {
    demo1();
}