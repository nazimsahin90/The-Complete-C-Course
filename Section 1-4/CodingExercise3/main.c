#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    int integralPart;
    float fractionalPart;

    printf("enter a floating number: ");
    scanf("%f", &number);

    integralPart = number;

    fractionalPart = number - integralPart;
    // 123.456 - 123 according to implicit type casting result will be 123.456 - 123.0 = 0.456

    printf("Fractional part = %f\n", fractionalPart);
    return 0;
}
