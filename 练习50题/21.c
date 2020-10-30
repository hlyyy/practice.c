#include<stdio.h>
#include<math.h>
//该方法错误
int sum(int a)
{
    if (a == 1)
        return 0;
    return ((int)(pow(2,a - 1) - sum(a - 1))) % 10000; //计算2的次方时数据已经溢出
}

int main()
{
    int n;
    while (1) {
        scanf("%d",&n);
        if (n == 0)
            break;
        printf("%d\n",sum(n));//得到的结果可能为负数
    }
    return 0;
}