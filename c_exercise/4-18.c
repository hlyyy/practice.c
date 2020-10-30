#include <stdio.h>
int main(void)
{
	int x,y,no;
	printf("显示多少个*:");
	scanf("%d",&no);
	x=no/5;
	y=no%5;
	for(;x>0;x--)
	printf("*****\n");
	for(;y>0;y--)
	printf("*");
	printf("\n");
	return 0;
}
