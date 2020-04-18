#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Suppose we want to generate 10 random numbers
    int i;
    for(i=0; i<10; ++i){
        printf("%d\t", rand());
    }

    // rand() function gives you random number in range 0 - MAX_INT
    // To limit range of rand function;
    for(i=0; i<10; ++i){
        printf("%d\t", rand()%10);
    }

    // Random number between 100 - 200
    for(i=0; i<10; ++i){
        printf("%d\t", rand()%101 + 100);
    }

    // Random number between (-100) - (-200)
    for(i=0; i<10; ++i){
        printf("%d\t", rand()%101 - 200);
    }

    time_t t;
    time(&t);

    srand(t); // seed the rand function with current time of system


    return 0;
}
