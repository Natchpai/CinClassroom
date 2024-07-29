#include <stdio.h>
#include <string.h>

void demo() {
    char s1[] = "lily";
    char s2[] = "bloom"; //char *s2 = "bloom";
    char s3[] = "LilY";

    printf("%d \n",strcmp(s2, s1));

    printf("Use strcmp() \n");
    if (strcmp(s1, s2) == 0) {
        // strcmp(a, b) ->  0, a = b
        // strcmp(a, b) ->  +, a < b
        // strcmp(a, b) ->  -, a > b
        printf("contents: s1 == s2 \n");
    } else {
        printf("contents: s1 != s2 \n");
    }

    // string comparison case insensitive
    printf("Use strcasecmp() \n");
    if (strcasecmp(s1, s3) == 0) {
        printf("contents: s1 == s2 \n");
    } else {
        printf("contents: s1 != s2 \n");
    }
}

int main() {
    demo();
}