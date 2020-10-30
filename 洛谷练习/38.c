#include<stdio.h>

int main()
{
    int n;
    printf("请输入该数组的长度\n");
    scanf("%d",&n);
    int a[n], i, max, min, j, k;

    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个数\n",i + 1);
        scanf("%d",&a[i]);
    }

    max = a[0];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            j = i;
        }
    }
    a[j] = a[0];
    a[0] = max;

    min = a[n-1];
    k = n - 1;
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] < min)
        {
            min = a[i];
            k = i;
        }
    }
    a[k] = a[n-1];
    a[n-1] = min;

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}