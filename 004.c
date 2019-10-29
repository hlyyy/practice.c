#include<stdio.h>
int main(void)
{
	int a,b,c,t;
	printf("请输入两个正整数:");
	scanf("%d%d",&a,&b);
	if (a<b) {
		t=a; 
		a=b;
		b=t; }
	while (b!=0) {
		c=a%b;
		a=b;
		b=c;}
	printf("两个正整数的最大公因数为%d\n",a);
	return 0;
}

