#include<stdio.h>

int main()
{
    int n, min, j, i;
    while (1) {
        int s[100] = {0};
        scanf("%d",&n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &s[i]);
        }
        min = s[0];
        j = 0;
        for (i = 1; i < n; i++)
        {
            if (min > s[i])
            {
                min = s[i];
                j = i; 
            }
        }
        i = s[0];
        s[0] = s[j];
        s[j] = i;
        for (i = 0; i < n; i++)
        {
            printf("%d ", s[i]);
        }
        printf("\n");
    } 
    return 0;
}