#include <stdio.h>
#include <stdlib.h>

int main()
{
    // While loop is variation of for loop
    int count=1;
    while (count <= 4)
    {
        printf("%d ", count);
        count++;
    }
    // Infinite for loop example
    /*
    int var = 6;
     while (var >=5)
     {
        printf("%d", var);
        var++;
     }
     */
     int i=1, j=1;
        // While loop that using logical operator
        while (i <= 4 || j <= 3)
        {
            printf("%d %d\n",i, j);
            i++;
            j++;
        }

    // Do While
    int j=0;
	do
	{
		printf("Value of variable j is: %d\n", j);
		j++;
	}while (j<=3);

    return 0;
}
