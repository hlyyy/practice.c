#include <stdio.h>
int main(void)
{
	int a,b,c,min;
	puts("请输入三个整数。");
	printf("整数1："); scanf("%d",&a);
	printf("整数2："); scanf("%d",&b);
	printf("整数3："); scanf("%d",&c);
	min=(a<b)?a:b;
	min=(min<c)?min:c;
	printf("最小值是%d。\n",min);
	return 0;
}
