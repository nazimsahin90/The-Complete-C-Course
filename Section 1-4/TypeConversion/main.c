#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Implicit type conversion
    int var1 = 10;
    float var2 = 2.5;
    double var3 = 1.5;

    int int_result;
    float float_result;
    double double_result;

    var1 + var2;
    // Compiler will detect the data type of var1 and var2
    // var1 -> int and var2 -> float
    // compiler will convert both var1 and var2 to float
    // var1 -> 10.0 var -> 2.5
    var1 + var2 + var3;
    // Compiler will detect the data type of var1, var2 and var3
    // var1 -> int, var2 -> float, var3 -> double
    // max(int,float,double) -> double

    int_result = var1 + var2;
    printf("int_result: %d\n", int_result);
    float_result = var1 + var2;
    printf("float_result: %f\n", float_result);
    double_result = var1 + var3;
    printf("double_result: %lf\n", double_result);

    return 0;
}
