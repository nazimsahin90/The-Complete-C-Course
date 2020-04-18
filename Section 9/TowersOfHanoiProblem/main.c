#include <stdio.h>
#include <stdlib.h>

void move(char towerA, char towerB, char towerC,int n) {
    if(n==1) {
        printf("Move plate from tower %c to tower %c\n", towerA, towerB);
    } else {
    move('A','C','B',n-1);
    move('A','B','C',1);
    move('C','B','A',n-1);
    }
}

int main()
{
    /* Towers of Hanoi solution

        Moving n plates from tower A to tower B is exactly same as moving n-1 plates
        from towerA to towerC and then one plate from towerA to towerB and
        finally move n-1 plates from towerC to towerB

    */
    move('A','B','C',4);

    return 0;
}
