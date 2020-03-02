#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int y = 20;
    x--;
    y--;
    printf("x = %d, y = %d\n", x, y);

    x = 10;
    y = 20;
    --x;
    --y;
    printf("x = %d, y = %d\n", x, y);

    x = 10;
    printf("x = %d\n", --x);
    y = 20;
    printf("x = %d\n", y--);

    return 0;
}
