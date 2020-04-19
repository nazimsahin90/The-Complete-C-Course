#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[ 10 ]; /* n is an array of 10 integers */
    int i,j;

    /* initialize elements of array n to 0 */
    for ( i = 0; i < 10; i++ ) {
        n[ i ] = i + 100; /* set element at location i to i + 100 */
    }

    /* output each array element's value */
    for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
    }

    /*
    Element[0] = 100
    Element[1] = 101
    Element[2] = 102
    Element[3] = 103
    Element[4] = 104
    Element[5] = 105
    Element[6] = 106
    Element[7] = 107
    Element[8] = 108
    Element[9] = 109
    */

    return 0;
}
