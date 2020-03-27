#include<stdio.h>

int main()
{
	long int a;

	printf("请输入一个长整型:");
	scanf("%lx",&a);
	if ((a>>16)%2 != 0)
		printf("高16位为奇数\n");
	else
		printf("高16位为偶数\n");
	if ((short int)a % 2 != 0) 
		printf("低16位为奇数\n");
	else 
		printf("低16位为偶数\n");
	return 0;
}
