#include <stdio.h>
#include <ctype.h>

size_t strLen(char *s) {
    size_t t;
    for(t = 0; *s != '\0'; t++) {
        s = s + 1; // s++
    }
    return t;
}

void strCap(char s[]) {
    for (int i = 0; i < strLen(s); i++) // or use strlen() in <string.h>
    {
        s[i] = (char)toupper(s[i]);
    }
}
// same
void strCap2(char *s) {
    for (int i = 0; i < strLen(s); i++) // or use strlen() in <string.h>
    {
        *(s + i) = (char)toupper(*(s + i));
    }
}

void strCap2V2(char *s) {
    for ( ; *s ; s++)  //or *s --> *s != '\0'
    {
        *s = (char)toupper(*s);
    }
}

int main() {
    char a[] = "python";
    strCap(a);
    printf("%s \n", a);

    char b[] = "lily";
    strCap2(b);
    printf("%s \n", b);

    printf("%zu", strLen(a));

}