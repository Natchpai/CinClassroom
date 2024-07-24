// dynamic memory allocation

#include <stdio.h>

#include <string.h> // strlen
#include <stdlib.h> // malloc

// char *strtag_notWork(char *s, char *tag) {
//     char tmp[500];
//     sprintf(tmp, "<%s>%s</%s>", tag, s, tag);
//     printf("tmp= %s", tmp);
//     return tmp; //! Value escapes the local scope
// }

// Population
char *strtag(char *destination, char *s, char *tag) {
    sprintf(destination, "<%s>%s</%s>", tag, s, tag);
    printf("in fn: %s (%p) \n", destination, destination);
    return destination;
}

char *strtagV2(char *s, char *tag) {
    char tmp[500];
    sprintf(tmp, "<%s>%s</%s>", tag, s, tag);
    printf("tmp : %s (%p) \n", tmp, tmp);
    char *destination = (char *) malloc(strlen(tmp) + 1); // stdlib.h  // character + '\0'
    strcpy(destination, tmp); // copy tmp to destination
    printf("dest: %s (%p) \n", destination, destination);
    return destination;
}

int main() {

    char dest[500]; // dest is address

    char *str = strtag(dest, "Hello", "h1");
    printf("str= %s (%p) \n", str, str);
    // OR
    strtag(dest, "Every", "h1");
    printf("str= %s (%p) \n", dest, dest);

    char *str2 = strtagV2("Nyan", "h2");
    printf("str= %s (%p) \n", str2, str2);
    free(str2);
    printf("-------- after free --------- \n");
    printf("str= %s (%p) \n", str2, str2);

}