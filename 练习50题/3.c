#include<stdio.h>

int main()
{
    int a=5,i,j,k;
    for (i=0;a-i*2>0;i++)
    {
        for (j=i;j>0;j--)
        {
            printf(" ");
        }
        for (k=a-2*i;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=1;i>=0;i--)
    {
        for (j=i;j>0;j--)
        {
            printf(" ");
        }
        for (k=a-2*i;k>0;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}