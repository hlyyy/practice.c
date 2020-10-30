#include<stdio.h>

int main()
{
	int a,b,c,temp;

	printf("请输入三个整数");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if (a>c)
	{
		temp=c;
		c=a;
		a=temp;
	}
	if (b>c)
	{
		temp=c;
		c=b;
		b=temp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}

