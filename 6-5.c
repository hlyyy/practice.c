#include<stdio.h>
int sump (int n)
{	int sum;
	sum=0;
	for(;n>0;n--)
	sum+=n;
	return sum;
}

int main(void)
{
	int x;
	printf("请输入一个整数:");
	scanf("%d",&x);
	printf("1到n之间所有整数的和为:%d",sump(x));
	return 0;
}
