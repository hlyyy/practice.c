#include<stdio.h>

int MaxCommonFactor(int a, int b);

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("最大公约数为%d\n", MaxCommonFactor(a, b));
    return 0;
}

int MaxCommonFactor(int a, int b)
{
    int i;
    while (1)
    {
        if (a % b == 0)
            return b;
        i = a % b;
        a = b;
        b = i;
    }
}