#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable = 10;
    // How to write integer constants
    variable = +10;
    printf("variable = %d.\n", variable);
    variable = -10;
    printf("variable = %d.\n", variable);
    variable = 012;
    printf("variable = %d.\n", variable);
    variable = 01234;
    printf("variable = %d.\n", variable);
    //variable = 012349;  invalid digit "9" in octal constant
    variable = 0x123; // hexadecimal
    printf("variable = %d.\n", variable);

    variable = 10;
    printf("variable = %d.\n", variable);
    printf("variable = %x.\n", variable);
    printf("variable = %X.\n", variable);
    printf("variable = %o.\n", variable);
    return 0;
}
