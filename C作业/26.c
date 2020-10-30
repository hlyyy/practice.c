#include<stdio.h>

int Judgement(int a)
{
    int i;

    if (a == 1)
        return 0;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int a;
    scanf("%d", &a);

    if (Judgement(a) == 1)
        printf("该数为素数\n");
    else
        printf("该数不是素数\n");
    
    return 0;
}