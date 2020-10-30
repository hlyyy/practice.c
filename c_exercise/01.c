#include<stdio.h>
int main(void)
{
	int a,b,c,sum;
	printf("请输入a,b,c的值:");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	printf("这三个数的和为%d\n",sum);
	return 0;
}
