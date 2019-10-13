#include <stdio.h>
int main(void)
{
	int i,x,j;
	printf("让我们来画一个金字塔。");
	printf("金字塔有几层:"); scanf("%d",&x);
	i=1;
	for (;i<=x;i++)     {
		for (j=x-i;j>=0;j--)
		putchar(' ');
		for (j=2*i-1;j>0;j--)
		putchar('*');
		printf("\n");  }
	return 0;
}
	
