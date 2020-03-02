#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = 1 + 2 * 3;
    printf("result: %d\n", result);
    // '*' has higher precedence than '/'
    int result2 = 2 * 8 / 3;
    printf("result2: %d\n", result2);

    return 0;
}
