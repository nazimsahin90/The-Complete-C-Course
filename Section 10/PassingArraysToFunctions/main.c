#include <stdio.h>
#include <stdlib.h>

int max(int *ptr, int N) {
    // Treat ptr as array
    int max = ptr[0];
    int i;
    for(i=0;i<N;++i){
        if(ptr[i]>max)
            max = ptr[i];
    }

    return max;
}

int min(int array[], int N) {
    int min = array[0];
        int i;
        for(i=0;i<N;++i){
            if(array[i]<min)
                min = array[i];
        }
        return min;
}

int main()
{
    // Arrays are always pass by reference

    int array[10] =  {1,2,3,4,5,6,7,8,9,10};

    printf("Maximum = %d\n", max(&array[0],10));

    printf("Maximum = %d\n", max(array,10));
    return 0;
}
