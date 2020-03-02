#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Logical Operators:
        1. Logical AND (&&)
        2. Logical OR (||)
        3. Logical NOT (!)
    */

    int x = 20;

    if(!(x >= 100 || x <= 10))
        printf("x is NOT between [100,10]\n");

    printf("x is %d : %d\n", x, !(x<20));
    return 0;
}
