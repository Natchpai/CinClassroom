#include <stdio.h>

int main() {
    // p[][value by column]
    int p[][3] = {
        {0, 1, 2},
        {10, 11, 12},
        {20, 21, 22}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("%d %d %d \n", p[i][0], p[i][1], p[i][2]);
    }

}