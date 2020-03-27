#include<stdio.h>

int main()
{
    double a,b,c;

    scanf("%lf%lf%lf",&a,&b,&c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("输入不为正数\n");
        return 0;
    }
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c)
            printf("1\n");
        else if (a == b || b == c || a == c)
            printf("2\n");
        else
            printf("3\n");
    }
    else
        printf("0\n");
    return 0;    
}