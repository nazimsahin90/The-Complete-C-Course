#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfHours;
    int discount;

    printf("Enter the number of hours, customer stayed: ");
    scanf("%d", &numberOfHours);

    /*
    if( numberOfHours % 2 === 0)
        discount = 10;
    else
        discount = 5;
    */
    discount = (numberOfHours % 2 == 0) ? 10 : 5;

    printf("Discount is %d%%.\n", discount);
    return 0;
}
