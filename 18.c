#include<stdio.h>
int main(void)
{
	int m,n,a,b,c;
	printf("请输入两个整数:");
	scanf("%d%d",&a,&b);
	n=a*b;
	if (b>a) {
		c=a;
		a=b;
		b=c; }
	do {
		m=a%b;
		a=b;
		b=m; } while (b!=0);
	printf("这两个数的最大公约数是%d\n",a);
	printf("这两个数的最小公倍数是%d\n",n/a);
	return 0;
}




