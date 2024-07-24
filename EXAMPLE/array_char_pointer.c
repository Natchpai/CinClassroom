#include <stdio.h>
#include <string.h>

void demo() {
    char flower[] = "tulip"; // flower is a pointer to array char
    printf("flower (address: %p) \n", flower); // The name of array is a address
    //! flower = "rose"; BC the name of array is store the address.
    //* flower[0] = 'T';

    flower[0] = 'T';
    printf("%s (%p) \n", flower, &flower);

    for(int i = 0; i < strlen(flower); i++) {

        printf("flower[%d] = %c (address: %p) \n", i, flower[i], &flower[i]);

    }

    char *planet = "Mercury"; // constant, planet is a pointer to char
    printf("%s (addr: %p) \n", planet, planet);
    //! *planet = 'm'; is unpredictable behavior

    //* %s is equivalent
    while(*planet != '\0') { //is EQ while(*planet)
        printf("%c (addr: %p) \n", *planet, planet); // *planet is dereference
        *planet++;
    }

}

int main() {
    demo();
}