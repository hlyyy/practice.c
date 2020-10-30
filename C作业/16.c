#include <stdio.h>

int main()
{
    int n, t, i = 0;
    int s[100];

    scanf("%d", &n);
    
    for (t = 0; n > 0; t++)
    {
        s[t] = n % 10;
        n /= 10;
    }
    n = t;
    t /= 2;
    for (; t > 0; t--)
    {
        if (s[t - 1] !=  s[n - t])
        {
            i = 1;
            break;
        }
    }
    if (i == 0)
        printf("该数是回文数\n");
    else
        printf("该书不是回文数\n");
        
    return 0;
}