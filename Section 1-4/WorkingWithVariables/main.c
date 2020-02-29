#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Rules for naming variables:
        1. Variable name can contain alphabets, digits and underscore.
        2. No special symbols such as space, @, comma, etc. are allowed
        3. Keywords cannot be uses as variable names.
        4. Variable must begin with either underscore or an alphabet.
    */
    int var;
    int var1, var2;
    int _var;

    float variable;
    float mySalary;

    // C is a case sensitive language
    int a;
    int A;

    var = 10;   // This initializes the variable var
    var = 20;   // This modifies the variable var

    float FLOAT = 123.345; // this initializes the float variable
    double DOUBLE = 123456789.123456789;

    char CHAR = 'a';
    CHAR = '\n';
    // CHAR = 'ab'; this is not valid because a character variable can store only a single character or escape sequences
    printf("Value of INT = %d\n", var);
    printf("Value of FLOAT = %f\nValue of DOUBLE = %lf\nValue of CHAR = %c", FLOAT, DOUBLE, CHAR);
    return 0;
}
