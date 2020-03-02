#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int min_int = INT_MIN;
    int max_int = INT_MAX;
    printf("min_int = %d and max_int = %d\n", INT_MIN, INT_MAX); // min_int = -2147483648 and max_int = 2147483647

    // How to store max number + 1?
    int value = 2147483648;
    printf("value: %d\n", value); // value: -2147483648

    long long int value1 = 2147483648L;
    printf("value1: %lld\n", value1); // value1: -2147483648

    long long int value2 = 9223372036854775820LL;
    printf("value2: %lld\n", value2); // value2: -9223372036854775796

    unsigned long long int value3 = 9223372036854775820LL;
    printf("value3: %llu\n", value3); // value3: 9223372036854775820

    /*
        by use of unsigned long long int we expanded the range of data type
        but sacrificed the negative values
    */
    return 0;
}
