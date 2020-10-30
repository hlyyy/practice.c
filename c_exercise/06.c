#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("请输入金字塔的高度:");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		for (j=1;j<=n-i;j++)
			putchar(' ');
		for (j=1;j<=2*i-1;j++)
			putchar('*');
		puts("\n"); }
	return 0;
}


