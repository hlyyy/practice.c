#include<stdio.h>
#include<math.h>

int main()
{
    int m, n, j, l, s = 0, k = 0;
    scanf("%d%d",&m,&n);
    for (j = 2;; j++)
    {
        l = 0;
        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                l = 1;
                break;
            }
        }         
        if (l == 0 )
        {
            s++;
            if (s >= m && s <= n)
            {
                k++;
                if (k % 10 == 0 || s == n)
                    printf("%d\n",j);
                else
                    printf("%d ", j);
            }
        }
        if (s > n)
        break;
    }
    return 0;
}