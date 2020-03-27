#include<stdio.h>

int maxnum (int a,int b)
{
    int c;
    if (a % b == 0)
    {
        return b;
    }
    return maxnum(b,a % b);
}

int main()
{
    int a,b,temp;
    
    printf("请输入两个正整数：");
    scanf("%d%d",&a,&b);
    if (a <= 0 || b <= 0)
    {
        printf("输入的值有误\n");
        return 0;
    }
    if (a < b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    printf("这两个数的最大公因数是%d\n",maxnum(a,b));
    return 0;
}