#include <stdio.h>
#include <string.h>

char* str_join(char **s, size_t n, char *delim, char *buffer) {
    for (int i = 0; i < n; i++)
    {
        strcat(buffer, *(s + i));
        strcat(buffer, delim);
    }
    buffer[strlen(buffer) - strlen(delim)] = '\0';
    return buffer;
}

int main() {
    char *flowers[] = {"Lily", "Carnation", "Daisy", "Iris"};
    char buf[500] = "";

    str_join(flowers, 4, " > ", buf);
    printf("%s \n", buf);
    // printf("%s \n", str_join(flowers, 4, " > ", buf));
}