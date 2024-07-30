#include <stdio.h>
#include <string.h>

char *rmNewLine(char *s) {
    char *p = strchr(s, '\n'); // strchr() -> address
    *p = '\0';
    return s;
}

int main() {
    FILE *f = fopen("flowers.txt", "r");
    char str[500] = "";
    int line = 1;
    while((fgets(str, 500, f)) != NULL) { // read until \n
        printf("%d:%s",line, rmNewLine(str));
        line++;
    }
    fclose(f);
}