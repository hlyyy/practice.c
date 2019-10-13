#include <stdio.h>
int main(void)
{
	int i,n;
	int sum=0;
	printf("n的值:");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	sum+=i;
	sum+=n;
	printf("1到%d的和为%d。\n",n,sum);
	return 0;
}
	
