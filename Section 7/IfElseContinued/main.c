#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    int number2;
    printf("Enter an integer: ");
    scanf("%d", &number2);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number2);
    }
    else {
        printf("%d is an odd integer.",number2);
    }

    int number11, number22;
    printf("Enter two integers: ");
    scanf("%d %d", &number11, &number22);

    //checks if the two integers are equal.
    if(number11 == number22) {
        printf("Result: %d = %d",number11,number22);
    }

    //checks if number1 is greater than number2.
    else if (number11 > number22) {
        printf("Result: %d > %d", number11, number22);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number11, number22);
    }

    return 0;
}
