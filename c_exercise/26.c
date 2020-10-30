#include<stdio.h>

int main() 
{
	int a,b,c,max,min;

	printf("请输入三个整数");
	scanf("%d%d%d",&a,&b,&c);
	min = a;
	max = a;
	if (min>b)
		min = b;
	if (min>c)
		min = c;
	if (max<b)
		max = b;
	if (max<c)
		max = c;
	printf("max = %d, min = %d\n",max,min);
	return 0;
}
