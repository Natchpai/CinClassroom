#include <stdio.h>
#include <ctype.h>

void demo() {
    char *flower = "lily"; // char *flower[] = "lily";
    // printf("%s \n", flower);

    char *f[3];
    f[0] = "carnation";
    f[1] = "rose";
    f[2] = "tulip";
    printf("%s", f[0]);
}

void demo2() {

    char *f[] = {"carnation", "rose", "tulip"}; // f is a pointer to char [3] , f: char *[3] , constant
    printf("%s \n", f[0]);

    f[0] = "lily";
    printf("%s \n", f[0]);
}

void demo3() {
    // 3 ช่อง ช่องละ 10 ตัว
    char f[3][10] = {"carnation", "rose", "tulip"}; // f: char [3][10]
    // char f[][10] = {"carnation", "rose", "tulip"};

    for(int i=0; i<3; i++) {
        printf("%s \n", f[i]);
    }

    for(int i=0; i<10; i++) {
        printf("%c \n", f[0][i]);
    }

    for(int i=0; i<3; i++) {
        f[i][0] = toupper(f[i][0]); // ctype.h
        printf("%s \n", f[i]);
    }

}

int main() {
    // demo1();
    // demo2();
    demo3();
}