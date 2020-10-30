#include<stdio.h>

int main()
{
    int i, n, m, sum, j, k;
    scanf("%d",&i);
    n = i * i * i;
    for (m = 1; ; m++)
    {
        sum = 0;
        for (j = i, k = m; j > 0; j--)
        {
            sum += k;
            k += 2;
        }
        if (sum == n)
        {
            for(j = 0; j < i; j++)
            {
                printf("%d ",m);
                m += 2;
            }
            printf("\n");
            break;
        }
    }
    return 0;
}