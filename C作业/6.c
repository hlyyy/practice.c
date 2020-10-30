#include<stdio.h>
#define N 10


int main()
{
    int a[10] = {0};
    int b[10] = {0};
    int c[20] = {0};
    int i, j, k, temp, max;

    printf("请输入第一个数组\n");
    for (i = 0; i < N; i++)
        scanf("%d",&a[i]);

    printf("请输入第二个数组\n");
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);
    printf("\n");

    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
        printf("%d ",a[i]);
    printf("\n");

    for (i = 0; i < N - 1; i++)
    {
        max = i;
        for (j = i + 1; j < N; j++)
        {
            if (b[max] < b[j])
                max = j;
        }
        temp = b[max];
        b[max] = b[i];
        b[i] = temp;
    }

    for (i = 0; i < 10; i++)
        printf("%d ",b[i]);
    printf("\n");

    i = 0;
    j = 0;
    k = 0;
    while (i < N && j < N)
        c[k++] = a[i] > b[j] ? a[i++] : b[j++];
    
    while (i < N)
        c[k++] = a[i++];

    while (j < N)
        c[k++] = b[j++];

    for (i = 0; i < 20; i++)
        printf("%d ", c[i]);
    printf("\n");
    return 0;
}