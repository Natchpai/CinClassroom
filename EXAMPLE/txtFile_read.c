#include <stdio.h>

int main() {
    FILE *f = fopen("demotxt_song.txt", "r");
    int c;
    while((c = fgetc(f)) != EOF) { // End Of File (-1)
        printf("%c", c);
    }
    fclose(f);
}