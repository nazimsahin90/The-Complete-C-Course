#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1 = 123.567;
    double frac = number1 - (int)number1;
    // frac = 123.567 - 123 = 0.567

    int digit1 = (int)(frac * 10);
    // digit1 = 0.567 * 10 = 5.67
    // (int)5.67 = 5

    int digit2 = (int)(((frac*10) - digit1) * 10);
    int difference = digit1 - digit2;

    printf("difference: %d", difference);
    return 0;
}
