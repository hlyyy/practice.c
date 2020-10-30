#include <stdio.h>

int main()
{
    int s[10];
    int a, b, temp;

    for (int i = 0; i < 10; i++)
        scanf("%d", &s[i]);

    for (a = 9; a > 0; a--)
    {
        for(b = 0; b <= a - 1; b++) 
        {
            if (s[b] > s[b+1])
            {
                temp = s[b];
                s[b] = s[b+1];
                s[b+1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    printf("%d\n",s[i]);

    return 0;
}