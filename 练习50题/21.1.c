#include <stdio.h>

int main()
{
    int a[1005];
    int n;
    a[0] = a[1] = 0;
    a[2] = a[3] = 2;
    
    for (int i = 4; i < 1005; i++)
        if (i % 2 == 0)
            a[i] = (a[i - 1] * 2 + 2) % 10000;
        else
            a[i] = (a[i - 1] * 2 - 2) % 10000;

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("%d\n", a[n]);
    }

    return 0;
    }