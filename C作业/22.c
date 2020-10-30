#include <stdio.h>

int main ()
{
    int a[6],s[6][6];
    int i, n, m;

    for (i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 6; i++)
    {
        for (n = i; n >= 0; n--)
            s[i][n] = a[6 - i + n];
        for (n = i; n < 6; n++)
            s[i][n] = a[n - i];
    }

    for (i = 0; i < 6; i++)
    {
        for (n = 0; n < 6; n++)
            printf("%d ",s[i][n]);
        printf("\n");
    }

    return 0;
}