#include <stdio.h>
#include <stdlib.h>

int main()
{
    float var1 = 123.456;
    double var2 = 123.123456789;
    printf("var1 = %f and var2 = %lf\n", var1, var2);

    long double var3 = 123.123123123123123123123; // double has a precision of approx 15 to 16(double or float)

    // apply singed/unsigned to float/double ??

    /*
    signed float var3 = 12.345;
    unsigned float var4 = 12.345;

    signed double var5 = 123.123456789;
    unsinged double var6 = 123.123456789;

    both 'signed' and 'float' in declaration specifiers|
    both 'unsigned' and 'float' in declaration specifiers|
    both 'signed' and 'double' in declaration specifiers|
    error: 'unsinged' undeclared (first use in this function)|

    CANNOT USE signed/unsigned with float or double
    */

    /* SHORT cannot be used with signed or unsigned modifier
    short float var7 = 12.345;
    short double var8 = 123.123456789;
    */
    return 0;
}
