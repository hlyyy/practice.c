#include <stdio.h>
int main(void)
{
	int n,x,y;
	printf("生成一个正方形\n正方形有几层:");
	scanf("%d",&n);
	for (x=1;x<=n;x++){
		for(y=1;y<=n;y++)
		printf("*");
	putchar('\n');}
	return 0;
}
	
