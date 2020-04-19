#include <stdio.h>
#include <stdlib.h>

typedef struct Customer Customer;
typedef int integer;

#define zero 0
#define one 1
#define two 2
#define three 3

enum  { zero=0, one=1, two=2, three=3};
enum {black,red,green,blue=10,purple}; // 0 , 1 , 2 , 10 , 4

int main()
{

    /*
        typedef keyword is used to give an additional name
        to an existing data type
    */

    int a,b;
    integer c,d;

    Customer customer;
    customer.balance = 120.12;
    strcpy(customer.name, "Tim");

    printf("Enter 2 integers: \n");
    scanf("%d%d", &c, &d);
    printf("Sum of %d and %d is %d.\n", c,d,c+d);


    // Enumerations are used to declare Integer constants
    printf("Three: %d", three);
    printf("black=%d",black);

    return 0;
}
