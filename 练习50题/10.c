#include<stdio.h>

int main()
{
    int n, m, sum;
    int s[50][5];

    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += s[i][j];
        }
        printf("%0.2f  ", (double)sum / m);
    }
    
    printf("\n");
    
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += s[i][j];
        }
        printf("%0.2f  ", (double)sum / n);
    }

    printf("\n");
    return 0;
}