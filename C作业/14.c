#include <stdio.h>


int main()
{
    int sum, n, i, t;

    for (n = 100; n < 1000; n++)
    {
        sum = 0;
        t = n;
        for (; t > 0; )
        {
            i = t % 10;
            sum += i * i * i;
            t /= 10;
        }

        if (sum == n)
            printf("%d\n",n);
    }
    return 0;
}