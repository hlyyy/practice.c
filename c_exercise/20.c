#include<stdio.h>
int factorial(int n)
{
	int i,a;
	a=1;
	for (i=1;i<=n;i++)
		a*=i;
	return a;
}
int main(void)
{
	int n,i,sum;
	sum=0;
	for (i=1;i<=20;i++)
		sum=factorial(i)+sum;
	printf("和为%d\n",sum);
	return 0;
}


