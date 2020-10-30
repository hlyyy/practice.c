#include<stdio.h>
int main(void)
{
	int i,n;
	printf("请输入一个四位整数:");
	scanf("%d",&i);
	do {
		n=i%10;
		printf("%d\n",n);
		i/=10;
	} while(i!=0);
	return 0;
}
