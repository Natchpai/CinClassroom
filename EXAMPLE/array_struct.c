#include <stdio.h>
typedef struct{
    char *name;
    double w, h;
    char gender;
} Person;

int main() {
    // Person p[5];
    // p[0].h = 149;
    // p[0].w = 48;
    // p[0].name = "Ui";
    // p[0].gender = 'F';

    Person p[] = {
        //w , h, age
        {"Ui", 48, 149, 'F'},
        {"Ai", 60, 163, 'M'},
        {"Ki", 80, 172, 'M'}
    };
            // 9 * 8bits / 3 * 8 bits
    int size = sizeof(p) / sizeof(p[0]);
    printf("size of p: %d ", sizeof(p));
    printf("size of p[0]: %d \n", sizeof(p[0]));

    for (int i=0; i<size; i++) {
        printf("Name: %s, ", p[i].name);
        printf("Weight: %.2f, ", p[i].w);
        printf("Height: %.2f, ", p[i].h);
        printf("Gender: %c \n", p[i].gender);
    }
}