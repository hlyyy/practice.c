#include <stdio.h>
int cube(int x)
{	return x*x*x;}
	
int main(void)
{
	int a;
	printf("请输入一个整数:");
	scanf("%d",&a);
	printf("这个整数的立方为:%d\n",cube(a));
	return 0;
}
