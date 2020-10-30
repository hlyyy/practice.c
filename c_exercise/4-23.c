#include <stdio.h>
int main(void)
{
	int i,j,x;
	puts("显示直角在左上方的等腰直角三角形");
	printf("直角边:");
	scanf("%d",&x);
	i=x;
	for (;i>=0;i--){
		for(j=i;(j<=i && j>0);j--)
		printf("*");
	printf("\n");
	}
	return 0;
}
