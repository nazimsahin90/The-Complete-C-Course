#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Write a function named myPowerFunction that takes
// two double variables and a pointer to a pow function
// and return the result using pointer to pow function
double myPowerFunction(double x, double y, double (*ptr)(double,double))  {
    return (*ptr)(x,y);
}

// double __cdecl pow(double _X, double _Y);
// double (*ptr)(double, double);
// To receive address of power function, we should have a pointer to pow function
int main()
{
    printf("2^4 = %lf\n", myPowerFunction(2,4,pow));
    return 0;
}
