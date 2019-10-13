#include <stdio.h>
int main(void)
{
	int no;
	printf("请输入一个正整数:");
	scanf("%d",&no);
	printf("%d逆向显示的结果是",no);
	while (no>0) {
	printf("%d",no%10);
	no/=10;}
	puts("。");
	return 0;
}
