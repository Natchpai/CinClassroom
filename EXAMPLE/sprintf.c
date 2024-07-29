#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char *genPins(char *pin, int l) {
    char fmt[100] = "";
    sprintf(fmt, "%%0%dd", l);
    sprintf(pin, fmt, rand() % (int)pow(9, l));
    return pin;
}

int main() {
    char pin[100] = "";
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        printf("%s \n", genPins(pin ,7));
    }

}