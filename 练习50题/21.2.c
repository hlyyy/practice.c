#include <stdio.h>
#include <math.h>

int sum(int a)
{
    if (a == 1)
        return 0;
    if (a == 2)
        return 2;
    return (sum(a - 2) * 2 + sum(a - 1)) % 10000;
}

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        printf("%d\n", sum(n)); 
    }
    return 0;
}