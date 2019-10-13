#include <stdio.h>
int main(void)
{
	int a,b,c;
	int sum=0;
	printf("请输入两个整数。");
	printf("整数a:"); scanf("%d",&a);
	printf("整数b:"); scanf("%d",&b);
	if (a<b){
	c=a;a=b;b=c;}
	sum=sum+b;c=b;
	do {
		b=b+1;
		sum=sum+b;
	} while (b<a);
	printf("大于等于%d小于等于%d的所有整数的和是%d。\n",c,a,sum);
	return 0;
}
