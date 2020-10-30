#include<stdio.h>

int main()
{
    int s;
    for (int i = 1;i < 1000;i++)
    {
        int j = i;
        for (s = 0;j != 0;j /= 10)
        {
            s += (j % 10) * (j % 10) * (j % 10);
        }
        if (s == i)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}