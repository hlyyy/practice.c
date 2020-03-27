#include<stdio.h>

int main()
{
    int a;

    printf("请输入一个5位十六进制整数:");
    scanf("%x",&a);
    if (a > 0xfffff || a < 0x10000)
    {
        printf("输入的不符合要求\n");
        return 0;
    }
    if (a % 0x10 == a / 0x10000 && a % 0x100 / 0x10 == a / 0x1000 % 0x10)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}