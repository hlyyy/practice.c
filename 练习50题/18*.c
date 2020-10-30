#include<stdio.h>

int main()
{   
    int T;
    scanf("%d",&T);
    while (T--)
    {
        int m, n, x, y, i, j, k, l, s = 0, s1 = 0;
        int num[1000][1000] = {0};

        scanf("%d%d%d%d",&m,&n,&x,&y);
        for (i = 0; i < m; i++)
        {
            for(j = 0;j < n;j++)
            {
                scanf("%d",&num[i][j]);
            }
        }

        for (i = 0; i <= m - x; i++)
        {
            for (j = 0; j <= n - y; j++)
            {
                s = 0;
                for (k = i; k - i < x; k++)
                {
                    for (l = j; l - j < y; l++)
                    {
                        s += num[k][l];
                    }
                }
                //printf("%d ",s);
                if (s > s1)
                    s1 = s;
            }
        }
        printf("%d\n",s1); 
    }
    return 0;
}