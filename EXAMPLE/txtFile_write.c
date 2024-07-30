#include <stdio.h>


int main() {
    FILE *f = fopen("txtFile_write.txt", "w"); // write
    fprintf(f, "Bloom Lily. \n");
    fclose(f);

    fopen("txtFile_write.txt", "a"); // append
    fprintf(f, "Bloom Lily. ");
    fprintf(f, "-> %d \n", 50);
    fprintf(f, "Hello World \n", 50);
    fprintf(f, "------------ \n", 50);
    fclose(f);

}