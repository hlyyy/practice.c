#include<stdio.h>

int main()
{
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }
    for (c = a; ; c--)
    {
        if (a % c == 0)
        {
            if (b % c == 0)
                break;
        }
    }
    printf("%d\n",a * b / c);
    return 0;
}