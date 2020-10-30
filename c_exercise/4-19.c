#include <stdio.h>
int main(void)
{
	int i,n,x;
	printf("整数值:");
	scanf("%d",&n);
	x=0;
	for(i=1;i<=n;i++)
	if (n%i == 0){
		printf("%d ",i);
		x++;}
	printf("\n约数有%d个\n",x);
	return 0;
}
