#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 3;
    printf("%d + %d = %d\n", x, y, (x+y));
    printf("%d - %d = %d\n", x, y, (x-y));
    printf("%d * %d = %d\n", x, y, (x*y));
    printf("%d / %d = %d\n", x, y, (x/y));
    printf("%d % %d = %d\n", x, y, (x%y));

    float a = 12.34, b = 56.789;
    printf("%f + %f = %f\n", a, b, (a+b));
    printf("%f - %f = %f\n", a, b, (a-b));
    printf("%f * %f = %f\n", a, b, (a*b));
    printf("%f / %f = %f\n", a, b, (a/b));

    x = 10;
    y = 20;

    x = x + y;
    x += y;
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
