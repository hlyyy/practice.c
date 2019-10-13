#include <stdio.h>
int main(void)
{
	int a;
	int no;
	printf("请输入一个正整数:");
	scanf("%d",&no);
	a=0;
	printf("%d的位数是",no);
	while (no>0){
	no/=10;
	a++;}
	printf("%d。\n",a);
	return 0;
}
	
	
