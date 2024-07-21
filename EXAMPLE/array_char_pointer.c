#include <stdio.h>
#include <string.h>

void demo() {
    char flower[] = "tulip"; // flower is a pointer to char
    printf("flower (address: %p) \n", flower);

    flower[0] = 'T';
    printf("%s (%p) \n", flower, &flower);

    for(int i = 0; i < strlen(flower); i++) {

        printf("flower[%d] = %c (address: %p) \n", i, flower[i], &flower[i]);

    }

    char *planet = "Mercury"; // constant, planet is a pointer to char
    printf("%s (addr: %p) \n", planet, planet);
    while(*planet) { // while(*planet != '\0')
        printf("%c (addr: %p) \n", *planet, planet); // *planet is dereference
        *planet++;
    }

}

int main() {
    demo();
}