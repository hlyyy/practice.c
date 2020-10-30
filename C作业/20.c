#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0, k = 0, t, temp;
    int s[10], s1[10], s2[10];
    
    memset(s, 0, 10 * sizeof(int));
    memset(s1, 0, 10 * sizeof(int));
    memset(s2, 0, 10 * sizeof(int));

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &t);
        if (t % 2 != 0)
        {
            s1[j] = t;
            j++;
        } 
        else 
        {
            s2[k] = t;
            k++;
        }
    }

    i = j;
    for (; i >= 1; i--) 
    {
        for (t = 0; t < i - 1; t ++)
        {
            if (s1[t] > s1[t + 1])
            {
                temp = s1[t];
                s1[t] = s1[t + 1];
                s1[t + 1] = temp;
            }
        }
    }

    i = k;
    for (; i >= 1; i--)
    {
        for (t = 0; t < i - 1; t++)
        {
            if (s2[t] > s2[t + 1])
            {
                temp = s2[t];
                s2[t] = s2[t + 1];
                s2[t + 1] = temp;
            }
        }
    }

    memcpy(s, s1, j * sizeof(int));
    memcpy(s + j, s2, k * sizeof(int));

    for (i = 0; i < 10; i++)
        printf("%d ", s[i]);

    printf("\n");
    return 0;
}