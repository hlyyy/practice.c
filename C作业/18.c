#include<stdio.h>

int main()
{
    int i, n, t;

    for (i = 5; i >= 0; i--)
    {
        for (t = i; t > 0; t--)
            printf(" ");
        for (n = 5; n > 0; n--)
            printf("*");
        printf("\n");
    }
    return 0;
}