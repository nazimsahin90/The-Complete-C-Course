#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    switch(number)  {
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("Number is out of range([1-7])");
    }
    return 0;
}
