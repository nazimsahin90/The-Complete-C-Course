#include <stdio.h>

int main () {

   /* an array with 5 elements */
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;

   p = balance;

   /* output each array element's value */
   printf( "Array values using pointer\n");

   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %f\n",  i, *(p + i) );
   }

   printf( "Array values using balance as address\n");

   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %f\n",  i, *(balance + i) );
   }

   return 0;
}
/*
    When the above code is compiled and executed, it produces the following result −

    Array values using pointer
    *(p + 0) : 1000.000000
    *(p + 1) : 2.000000
    *(p + 2) : 3.400000
    *(p + 3) : 17.000000
    *(p + 4) : 50.000000
    Array values using balance as address
    *(balance + 0) : 1000.000000
    *(balance + 1) : 2.000000
    *(balance + 2) : 3.400000
    *(balance + 3) : 17.000000
    *(balance + 4) : 50.000000
*/

