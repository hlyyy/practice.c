#include <stdio.h>
#include <string.h>

int main()
{
    int s[10], i, temp, max = 0, min = 0;
    memset(s, 0, 10 *sizeof(int));

    for (i = 0; i < 10; i++)
        scanf("%d", &s[i]);

    for (i = 1; i < 10; i++)
    {
        if (s[i] < s[min])
            min = i;
        if (s[i] > s[max])
            max = i;
    }

    temp = s[min];
    s[min] = s[max];
    s[max] = temp;

    for (i = 0; i < 10; i++)
        printf("%d ", s[i]);

    printf("\n");
    return 0;
}