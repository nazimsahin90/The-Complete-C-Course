#include <stdio.h>
#include <stdlib.h>

int main()
{
    float variable = 10.1;
    printf("variable = %f.\n", variable);
    // These are not valid with other platforms
    variable = 10.;
    printf("variable = %f.\n", variable);
    variable = .1;
    printf("variable = %f.\n", variable);

    variable = 1.2E2;
    printf("variable = %f.\n", variable);
    //variable = 1.2E.12 Invalid

    variable = 1234.123123;
    printf("variable = %f.\n", variable);
    printf("variable = %E.\n", variable);
    printf("variable = %e.\n", variable);
    printf("variable = %lf.\n", variable);
    // printf("variable = %d.\n", variable); Not encourage to do this

    return 0;
}
