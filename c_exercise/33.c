#include<stdio.h>

int main()
{
    int m, s, n = 0;
    scanf("%d",&m);
    s = m * (m - 1) / 2;
    printf("%d^3 = ",m);
    for (int i = 2 * s + 1;n < m;n++)
    {
        printf("%d + ",i);
        i += 2;
    }
    printf("\b\b\b");
    printf("\n");
    return 0;
}