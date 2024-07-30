#include <stdio.h>
#include <ctype.h>

char *rmNonDigit(char *dest, const char *source) {
    int index = 0;
    while (*source != '\0')
    {
        if(isdigit(*source)) {
            dest[index] = *source;
            index++;
        }
        source++;
    }
    dest[index] = '\0';
    return dest;
}


int main() {
    char dest[100] = "";
    char *s = "tel: (095)123-456 7";
    printf("%s --> %s \n",s , rmNonDigit(dest, s));
}