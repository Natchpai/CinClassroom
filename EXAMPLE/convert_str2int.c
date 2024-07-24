#include <stdio.h>
#include <stdlib.h> // atoi()
#include <strings.h> // strcasecmp()

void demo_str2int() {
    char *s = "123";
    int i = atoi(s);
    printf("i = %d \n", i);

    // double d = atof("-3.1415");
    // printf("i = %.2lf \n", d);

}

void demo_strton() {
    char *s = "                     3.145  rad         ";
    double d = strtod(s, NULL);
    printf("d = %.2lf \n", d);
}

void demo_strtonV2() {
    char *s = "3.145 rad";
    char *p;
    double d = strtod(s, &p);
    printf("d = %.2lf \n", d);
    printf("p = %s \n", p);

    //  case insensitive comparison
    if(strcasecmp(p, " rad") == 0) {
        printf("%.2lf%s = %.2lf degree\n", d, p, d * 57.295);
    }
}


int main() {
    demo_str2int();
    demo_strton();
    demo_strtonV2();
}