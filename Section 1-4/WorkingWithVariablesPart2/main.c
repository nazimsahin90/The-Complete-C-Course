#include <stdio.h>
#include <stdlib.h>

int main()
{
    int INT;
    float FLOAT;
    double DOUBLE;
    char CHAR;

    scanf("%d", &INT);
    scanf("%f", &FLOAT);
    scanf("%lf", &DOUBLE);
    fflush(stding); // Cleans up input cache
    scanf("%c", &CHAR);

    printf("INT = %d, FLOAT = %f, DOUBLE = %lf.\n", INT, FLOAT, DOUBLE);
    printf("CHAR = %c", &CHAR);

    return 0;
}
