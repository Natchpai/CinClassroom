#include <stdio.h>
#include <string.h>

void strpullLeft(char *dest, char *source, size_t n) {
    strncpy(dest, source, n);
    dest[n] = '\0'; //   \0 => Null terminator or Null character
}

void strpullRight(char *dest, char *source, size_t n) {
    // 0 + 10 - 2 = 8
    strncpy(dest, source + strlen(source) - n, n);
    dest[n] = '\0';
}

void subStr(char *dest, char *source, size_t firstIndex, size_t lastIndex) {
    // Start Index: 0 + 6 = 6 , Pull (7 - 6) + 1 = 2
    strncpy(dest, source + firstIndex, (lastIndex - firstIndex) + 1);
    dest[lastIndex - firstIndex + 1] = '\0';
}

char *subStrV2(char *dest, char *source, size_t firstIndex, size_t lastIndex) {
    // Start Index: 0 + 6 = 6 , Pull (7 - 6) + 1 = 2
    strncpy(dest, source + firstIndex, (lastIndex - firstIndex) + 1);

    dest[lastIndex - firstIndex + 1] = '\0';
    return dest;
}

int main() {
    char *s = "Shigure Ui";
    // Shigure
    char buf[10];
    strpullLeft(buf, s, 7);
    printf("%s \n", buf);

    // Ui
    char buf2[10];
    strpullRight(buf2, s, 2);
    printf("%s \n", buf2);

    // re
    char buf3[10];
    subStr(buf3, s, 5, 6);
    printf("%s \n", buf3);

    // gure
    char buf4[10];
    printf("%s \n",subStrV2(buf4, s, 3, 6));
}