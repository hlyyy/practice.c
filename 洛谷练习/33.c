#include<stdio.h>

int main ()
{
    int a,b,c,d,num;

    scanf("%d",&num);
    if (num < 1000 || num > 9999)
    {
        printf("输入的数据有误\n");
        return 0;
    }
    a = num / 1000;
    b = num % 1000 /100;
    c = num % 100 / 10;
    d = num % 10;
    printf("该数字的逆序为%d%d%d%d",d,c,b,a);
}