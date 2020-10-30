#include<stdio.h>
#include<string.h>

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[6], n, i;
    memset(b, 0, 6 * sizeof(int));

    scanf("%d", &n);

    for (i = 0; i < 6; i++)
    {
        if (a[i] < n)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = n;
            break;
        }
    }

    for (i = i + 1; i < 6; i++)
        b[i] = a[i-1];

    for (i = 0; i < 6; i++)
        printf("%d ", b[i]);

    return 0;
}