#include<stdio.h>
int sqr(int x)
{	return x*x; } 

int sqr2(int x)
{	return sqr(x)*sqr(x);	} 
int main(void)
{	int a;
	printf("请输入一个整数:");
	scanf("%d",&a);
	printf("这个整数的四次方是%d\n",sqr2(a));
	return 0;
}
