#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int factorial  = 1, i;

    // Label syntax
    // Label_name:
    start:
    printf("Print any positive integer: \n");
    scanf("%d", &N);

    if(N > 0) {
        for(i = 1; i <= N; ++i)  {
            factorial *= i;
        }
        printf("%d! = %d.\n", N, factorial);
    } else {
        printf("N cannot take negative values.\n");
        goto start;
    }

    return 0;
}
