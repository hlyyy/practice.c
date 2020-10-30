#include <stdio.h>
int main(void)
{
	int i,j,x;
	puts("生成直角在右下方的等腰直角三角形。");
	printf("直角边:");
	scanf("%d",&x);
	i=x;
	for (;i>=0;i--) {
		for(j=1;j<=x-i;j++)
			putchar(' ');
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n"); }
	return 0;
}
