#include <stdio.h>

int main()
{
    int i, n, t;

    for (i = 1; i <= 5; i++)
    {
        if (i <= 3)
            t = i - 1;
        else
            t = 5 - i;

        n = 5 - 2 * t;
        
        for (; t > 0; t--)
            printf(" ");

        for (; n > 0; n--)
            printf("*");

        printf("\n");
    }
    return 0;
}