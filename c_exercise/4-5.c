#include <stdio.h>
int main(void)
{
	int i;
	int no;
	printf("请输入一个整数:");
	scanf("%d",&no);
	i=1;
	while (i*2<no)
	printf("%d ",i=i*2);
	return 0;
}
