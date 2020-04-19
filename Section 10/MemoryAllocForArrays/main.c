#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5], i;

    printf("Size of int data type is : %d bytes.\n", sizeof(int));
    for(i = 0; i < 5; ++i){
        printf("&arr[%d] = %d\n", i, &arr[i]);
    }

    return 0;
}
