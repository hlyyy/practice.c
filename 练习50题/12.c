#include<stdio.h>

int main()
{
    int n, m = 0;
    scanf("%d",&n);
    /*
    if (n <= 0 || n > 1000)
    {
        printf("输入数据有误");
        return 0;
    }
    */
    for (; n != 1; m++)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (3 * n + 1) / 2;
    }
    printf("%d\n",m);
    return 0;
}