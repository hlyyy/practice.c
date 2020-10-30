#include<stdio.h>
int gcd(int x,int y)
{
		int i,c;
		if (y>x){
			c=y;
			y=x;
			x=c; }
		i=x%y;
		if (i==0)
			return y;
		else 
			return gcd(y,i);
}
int main(void)
{
	int x,y;
	printf("请输入两个整数:");
	scanf("%d%d",&x,&y);
	printf("这两个数的最大公约数是%d\n",gcd(x,y));
	return 0;
}

