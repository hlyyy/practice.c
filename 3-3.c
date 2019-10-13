#include <stdio.h>
int main(void)
{
	int x;
	printf("请输入一个整数:"); scanf("%d",&x);
	if (x>=0)
	printf("绝对值是%d",x);
	else
	printf("绝对值是%d",-x);
	return 0;
}
