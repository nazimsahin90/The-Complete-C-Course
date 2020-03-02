#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
    int is equivalent to signed int
    to make it unsigned we use unsigned int

    long is equivalent to long int which is itself equivalent to unsigned int
    to make it unsigned we use unsigned long

    short is equivalent to short int which is itself equivalent to signed short int
    to make it unsigned we use unsigned short

    long long is equivalent to long long int which is itself equivalent to signed long long int
    to make it unsigned we unsigned long long
*/
int main()
{
    /* use of long modifiers the range */
    printf("min_int = %d and max_int = %d\n", INT_MIN, INT_MAX);
    printf("long_min = %ld and long_max = %ld\n", LONG_MAX, LONG_MIN);
    printf("long_long_min = %lld and long_long_min = %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);

    /* use of unsigned throws away all negative values creating space for */
    printf("unsigned_int_min = %u and unsigned_int_max = %u\n", 0, UINT_MAX);
    printf("unsigned_long_int_min = %lu and unsigned_long_int_max = %lu\n", 0UL, ULONG_MAX);
    printf("unsigned_long_long_int_min = %llu and unsigned_long_long_int_max = %llu\n", 0ULL, ULLONG_MAX);

    /*
    min_int = -2147483648 and max_int = 2147483647
    long_min = 2147483647 and long_max = -2147483648
    long_long_min = -9223372036854775808 and long_long_min = 9223372036854775807
    unsigned_int_min = 0 and unsigned_int_max = 4294967295
    unsigned_long_int_min = 0 and unsigned_long_int_max = 4294967295
    unsigned_long_long_int_min = 0 and unsigned_long_long_int_max = 18446744073709551615
    */

    /* short(length modifier) */
    printf("short_min = %hd and short_max = %hd\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned_short_min = %hu and unsigned_short_max = %hu\n", 0, USHRT_MAX);
    /*
    short_min = -32768 and short_max = 32767
    unsigned_short_min = 0 and unsigned_short_max = 65535
    */

    return 0;
}
