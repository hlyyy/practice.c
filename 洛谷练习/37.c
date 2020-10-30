#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k, n, m, x;
    for (n = 2; n < 100; n++)
    {
        x = 0;
        for (m = 2; m <= sqrt(n); m++)
        {
            if (n % m == 0)
            {
                x = 1;
                break;
            }
        }
        if (x == 0)
            printf("%d\n",n);
    }
    return 0;
}