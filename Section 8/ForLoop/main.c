#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    // Single loop
    for (i=1; i<=3; i++)
    {
       printf("%d\n", i);
    }
    // Nested loops
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<4; j++)
        {
        printf("%d, %d\n",i ,j);
        }
    }
    // Continue statement
    int counter=10;
    while (counter >=0)
    {
	 if (counter==7)
	 {
	      counter--;
	      continue;
	 }
	 printf("%d  ", counter);
	 counter--;
    }
    // Continue statement - 2
    int j=0;
    do
    {
      if (j==7)
      {
         j++;
         continue;
      }
      printf("%d ", j);
      j++;
    }while(j<10);
    return 0;
}
