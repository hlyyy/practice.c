#include<stdio.h>

int main()
{
    int m, i, n, x;
    int s[4] = {0};
    scanf("%d",&m);

    if (m < 1000 || m > 9999)
    {
        printf("输入的数不是四位整数\n");
        return 0;
    }

    for (i = 0; i < 4; i++)
    {
       s[i] = m %10;
       printf("%d ",s[i]);
       m /= 10;
    }
    printf("\n");

    for (n = 3; n > 0; n--)
    {
        for (i = 0; i < n; i++)
        {
            if (s[i] < s[i+1])
            {
                x = s[i];
                s[i] = s[i+1];
                s[i+1] = x;
            }
        }
    }
    for (i = 0; i < 4; i++)
        printf("%d",s[i]);
    printf("\n");
    for (i = 3; i >= 0; i--)
        printf("%d",s[i]);
    printf("\n");
    return 0;
}