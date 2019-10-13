#include<stdio.h>
int min1(int a,int b)
{    int min=a;
	if (b<min)
	min=b;
	return min;
}
	
int main(void)
{
	int x,y;
	printf("请输入两个整数。");
	printf("x的值为:"); scanf("%d",&x);
	printf("y的值为:"); scanf("%d",&y);
	printf("较小的值为:%d\n",min1(x,y));
	return 0;
}
