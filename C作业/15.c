#include <stdio.h>

int main()
{
    int n, t, sum = 0;

    scanf("%d",&n);
    for (; n > 0; )
    {
        t = n % 10;
        sum += t;
        n /= 10;
    }

    printf("%d\n", sum);
    return 0;
}