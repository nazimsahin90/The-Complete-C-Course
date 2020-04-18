#include <stdio.h>
#include <stdlib.h>
// global variable
int variable = 10;

int main()
{
    variable = 20;
    function1();
    function2();
    int variable = 30;
    printf("variable of global is %d \n", variable);

    // static variable test
    printf("%d ", fun());
    printf("%d ", fun());

    /* local variable declaration */
    int a, b;
    int c;

    /* actual initialization */
    a = 10;
    b = 20;
    c = a + b;

    printf ("value of a = %d, b = %d and c = %d\n", a, b, c);

    return 0;
}

void function1()  {
    variable = 20;
    printf("variable changed to %d in function1. \n", variable);
}

void function2()  {
    int variable = 30;
    printf("variable changed to %d in function2. \n", variable);
}

int fun()
{
  static int count = 0;
  count++;
  return count;
}
