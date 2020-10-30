#include <stdio.h>
int main(void)
{
	int no;
	int x,y,z;
	printf("请输入一个整数:");
	scanf("%d",&no);
	x=no/10;
	y=no%10;
	for (;x>0;x--)
	printf("1234567890");
	for (z=1;y>0;y--)
	printf("%d",z++);
	return 0;
}
