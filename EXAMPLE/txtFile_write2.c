#include <stdio.h>
#include <ctype.h>
#include <time.h>

void menu() {
    printf(" [M] Mocha \n");
    printf(" [L] Latte \n");
    printf(" [E] Espresso \n");
    printf(" [T] Tea \n");
    printf(" [Q] Exit \n");
    printf(" ------------- \n");
}

char *now(char *dest) {
    time_t ct = time(NULL);
    struct tm *info = localtime(&ct);
    strftime(dest, 40, "%Y%m%dT%H%M%S", info);
    return dest;
}

int main() {
    menu();
    char dt[40];
    char m;
    FILE *f = fopen("txtFile_write2.txt", "a");
    do{
        printf("enter menu: ");

        //? " %c" skipping all white-spaces
        scanf(" %c", &m);
        m = (char)toupper(m);
        fprintf(f, "%s: %c\n",now(dt), m);
    } while (m != 'Q');
    fclose(f);
}