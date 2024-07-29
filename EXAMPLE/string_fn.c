#include <stdio.h>
#include <string.h>

void demo_strlen() {
    char s[] = "lily";
    printf("strlen(s) = %zu \n", strlen(s)); // l, i, l, y
    printf("sizeof(s) = %zu \n", sizeof(s)); // l, i, l, y, \0
}
// concatenate
void demo_strcat() {
    char s1[100];
    strcat(s1, "bloom");
    printf("%s \n", s1);

    char s2[100] = "";
    strcat(s2, "bloom");
    printf("%s \n", s2);
    strcat(s2, "ing");
    printf("%s \n", s2);

    strncat(s2, " LilyOA-WBm", 5);
    printf("%s \n", s2);
}

int main() {
    demo_strlen();
    demo_strcat();
}