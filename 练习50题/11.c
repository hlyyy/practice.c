#include<stdio.h>

int main()
{
    int n, m, temp;
    int s[100000];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            if (s[j - 1] < s[j])
            {
                temp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = temp;
            }
        }
        if (i == m - 1)
            break;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ",s[i]);
    }
    printf("\n");
    return 0;
}