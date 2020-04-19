#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  var[] = {10, 100, 200};
    int i, *ptr[MAX];

    for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; /* assign the address of integer. */
    }

    for ( i = 0; i < MAX; i++) {
      printf("Value of var[%d] = %d\n", i, *ptr[i] );
    }

    char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };

   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }

   int array[MAX_SIZE], N, i;
   printf("Enter %d elements \n", N);
   for(i = 0;i < N; ++i)  {
        printf("%d", array [i]);
   }

    return 0;
}
