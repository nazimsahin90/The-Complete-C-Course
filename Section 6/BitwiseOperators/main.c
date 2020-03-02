#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    // 01111000 >>2 shift two units to right and the result will be 00011110
    // 00011110 <<1 shift two units to left and the result will be 00111100

    /* Original byte: 00101100
        After 1st complement: 11010011
        After 2nd complement: 00101100
    */

    int var1 = 127;
    int var2 = 120;
    int bitwiseAnd = var1 & var2;
    int bitwiseOr = var1 | var2;
    int bitwiseXor = var1 ^ var2;
    int oneComplement = ~var1;
    int twoComplement = ~oneComplement;

    int leftShift = var2 << 2;
    int rightShift = var2 >> 3;

    printf("%d & %d = %d.\n", var1, var2, bitwiseAnd);
    printf("%d | %d = %d.\n", var1, var2, bitwiseOr);
    printf("%d ^ %d = %d.\n", var1, var2, bitwiseXor);
    printf("~%d = %d.\n", var1, oneComplement);
    printf("~(~%d) = %d.\n", var1, twoComplement);

    printf("%d << 2 = %d.\n", var2, leftShift);
    printf("%d >> 3 = %d.\n", var2, rightShift);

    return 0;
}
