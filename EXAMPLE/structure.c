#include <stdio.h>
#include <math.h>

struct coordinate {
    double x;
    double y;
};

double distance(struct coordinate co1, struct coordinate co2) {
    return sqrt(pow(co1.x - co2.x, 2) + pow(co1.y - co2.y, 2));
}

// typedef
typedef struct {
    double x, y;
} coordinate2;

double distance2(coordinate2 co1, coordinate2 co2) {
    return sqrt(pow(co1.x - co2.x, 2) + pow(co1.y - co2.y, 2));
}


int main() {
    //* distance function

    struct coordinate co1;
    co1.x = 2;
    co1.y = 5;

    struct coordinate co2 = {4, 10};
    //?or// struct coordinate co2 = {.x=4, .y=10};

    printf("%.2f \n", distance(co1, co2));


    //* distance2 function
    coordinate2 Co1 = {2, 5};
    coordinate2 Co2 = {4, 10};

    printf("%.2f \n", distance2(Co1, Co2));

}
