#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer = 123; // signed integer is being cast to signed integer
    unsigned int unsigned_integer = 123; // signed integer is being cast to unsigned integer
    long int long_integer = 123; // signed integer is being cast to long integer
    unsigned long int unsigned_long_integer = 123; // signed integer is being cast to unsigned long integer
    float floating_point = 123.456; // double is being cast to float
    double double_variable = 123.456; // double is being cast to double
    long double long_double = 123.456; // double is being cast to long double

    /*Ideally above statements should use suffixes as shown*/
    int actual_integer = 123;
    unsigned int actual_unsigned_int = 123u;
    long int actual_long_int = 123L;
    unsigned long int actual_unsigned_long_int = 123UL;
    float actual_floating_point = 123.456F;
    double actual_double = 123.456;
    long double actual_long_double = 123.456L;

    return 0;
}
