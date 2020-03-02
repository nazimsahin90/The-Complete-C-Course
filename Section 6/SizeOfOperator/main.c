#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// unsigned modifier is used to discard a set of values and create space for other values. short/long are used to compress/expand the range.
int main()
{
    /*sizeof (data_type) gives the size of given data type in bytes*/
    printf("sizeof (char): %d bytes\n", sizeof(char));
    printf("sizeof (unsigned char): %d bytes\n", sizeof(unsigned char));
    printf("sizeof (short int): %d bytes\n", sizeof(short int));
    printf("sizeof (unsigned short int): %d bytes\n", sizeof(unsigned short int));
    printf("sizeof (int): %d bytes\n", sizeof(int));
    printf("sizeof (unsigned int): %d bytes\n", sizeof(unsigned int));
    printf("sizeof (long int): %d bytes\n", sizeof(long int));
    printf("sizeof (unsigned long int): %d bytes\n", sizeof(unsigned long int));
    printf("sizeof (long long int): %d bytes\n", sizeof(long long int));
    printf("sizeof (unsigned long long int): %d bytes\n", sizeof(unsigned long long int));
    printf("sizeof (float): %d bytes\n", sizeof(float));
    printf("sizeof (double): %d bytes\n", sizeof(double));
    printf("sizeof (long double): %d bytes\n", sizeof(long double));


    // Quiz - Q1
    printf("sizeof (1.234): %d\n", sizeof(1.234));
    printf("sizeof (1.234f): %d\n", sizeof(1.234f));
    if (sizeof (1.234) == sizeof (1.234f))
        printf ("Equal size\n");
    else
        printf ("Size not equal\n");

    // Quiz - Q2
    if (INT_MAX + 1 == INT_MIN)
        printf ("Equal\n");
    else
        printf ("Not Equal\n");

    // Quiz - Q3
    unsigned int value = -10; // First line cast signed integer to unsigned integer and then second line does the reverse. Hence the output will be -10.
    printf ("%d\n", value);

    // Quiz - Q4
    /*
    if (sizeof (long float) == sizeof (double)) // long float does not represent a valid data type and hence leads to a compile time error
        printf ("True");
    else
        printf ("False");
    */

    // Quiz - Q5
    int valueQ5 = -10u;
    printf ("%d", valueQ5); // The behaviour is implementation defined.

    return 0;
}
