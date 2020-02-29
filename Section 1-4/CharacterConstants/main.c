#include <stdio.h>
#include <stdlib.h>

int main()
{
    char variable = 'A';
    printf("variable = %c\n", variable);
    variable = '1';
    printf("variable = %c\n", variable);
    variable = '\n';
    printf("variable = %c\n", variable);
    variable = '@';
    printf("variable = %c\n", variable);
    variable = '\"';
    printf("variable = %c\n", variable);
    variable = 'a';
    printf("variable = %c\n", variable);
    printf("variable = %d\n", variable);

    variable = '1' + '2';
    printf("variable = %c\n", variable);

    return 0;
}
