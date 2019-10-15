#include <stdio.h>
int main(void)
{
		int num,i,factorial;
		factorial=1;
		printf("请输入一个整数:");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
			factorial*=i;
		printf("该数的阶乘为%d\n",factorial);
		return 0;
}



