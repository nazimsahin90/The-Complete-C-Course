#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Scan two integers and print their sum
    int first, second, sum;
    printf("Enter two integers...\n");
    scanf("%d", &first);
    scanf("%d", &second);
    sum = first + second;
    printf("Sum: %d", sum);
    return 0;
}
