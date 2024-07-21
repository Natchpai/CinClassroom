#include <stdio.h>
#include <ctype.h>

void str_upper(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}

// is equal

void str_upper2(char *s) {
    int i = 0;
    while(s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}

int strLength(char *s) {
    int i = 0;
    while(*s != '\0') {
        s++;
        i++;
    }
    return i;
}

int main() {
    char flower[] = "lily"; // can edit value but can't change address
    str_upper2(flower);
    printf("%s \n", flower);

    printf("%d \n", strLength(flower));

    char *flower2 = "jasmine"; // is constant , can't edit value but can change address

    printf("%d \n", strLength(flower2));
    printf("%s (%p)\n", flower2, flower2);

    flower2 = "Rose";

    printf("%s (%p)\n", flower2, flower2);


}