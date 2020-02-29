#include <stdio.h>
#include <stdlib.h>

int main()
{
    // have to declare variables before write any statements
    int number1=10, number2=15;
    int sum = number1 + number2;
    int multiplication = number1 * number2;
    int subtraction = number1 - number2;
    int division = number1 / number2;

    int variable;
    float variable2;

    printf("sum: %d\n", sum);
    printf("multiplication: %d\n", multiplication);
    printf("subtraction: %d\n", subtraction);
    printf("division: %d\n", division);

    variable = 8/3;
    printf("variable: %d\n", variable);
    variable2 = 10/4;
    printf("variable2: %f\n", variable2); // result will be 2.00000

    return 0;
}
