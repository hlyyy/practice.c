#include<stdio.h>

int main()
{
    int n, a;
    long int sum = 0;
    scanf("%d%d",&n,&a);

    for (int i = 1; n > 0; n--)
    {
        sum += a * i * n;
        i *= 10;
    }

    printf("%ld\n",sum);

    return 0;
}