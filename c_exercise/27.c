#include<stdio.h>

int main()
{
	unsigned short a,b,c,max,min;

	printf("输入三个短整数：");
	scanf("%hd%hd%hd",&a,&b,&c);

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	printf("max = %hu, value = %hd\n",max,max);
	printf("min = %hu, value = %hd\n",min,min);
	return 0;
}
