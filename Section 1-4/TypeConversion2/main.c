#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Explicit type casting
    int result = 10/3;
    result = 8/3;
    float variable;

    printf("result: %d\n", result);

    variable = 10/3;
    printf("variable: %f\n", variable);

    variable = (float)10/3;
    printf("variable with explicit type casting: %f\n", variable);

    result = 10/(double)3;
    printf("result with explicit type casting: %d\n", result); // result will be 3

    return 0;
}
