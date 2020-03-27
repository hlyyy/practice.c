#include<stdio.h>

int main() 
{
    int i,n,a,m;
    m = 1;
    for (i = 2;i < 100;i++)
    {
        a = 0;
        for (n = 2;n < i;n++)
        {
            //printf("%d",i);
            if (i % n == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
        {
            printf("%d ",i);
            m++;
        }
        if (m > 5)
        {
            printf("\n");
            m = 1;
        }
    }
    return 0;
}