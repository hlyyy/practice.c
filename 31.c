#include<stdio.h>

int main()
{
    int a;

    printf("请输入一个5位十进制整数:");
    scanf("%d",&a);
    if (a > 99999 || a < 10000)
    {
        printf("输入的不符合要求\n");
        return 0;
    }
    if (a % 10 == a / 10000 && a % 100 / 10 == a / 1000 % 10)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}