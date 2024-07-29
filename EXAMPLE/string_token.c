#include <stdio.h>
#include <string.h>

void demo() {
    //! strtok() cannot be used with pointer array
    // char *str = "Shigura,Ui,mama";
    char str[] = "2024,Ui,mama";
    char *delim = ",";
    char *token;

    for (int i = 0; i < 12; i++)
    {
        printf("str[%d] = %c \n", i, str[i]);
    }
    printf("Before----------strtok() \n");

    token = strtok(str, delim);
    while(token != NULL) {
        printf("Token: %s \n", token);
        token = strtok(NULL, delim);
    }

    printf("After-----------strtok() \n");
    for (int i = 0; i < 12; i++)
    {
        printf("str[%d] = %c \n", i, str[i]);
    }

}

int main() {
    demo();
}