#include<stdio.h>
int main (void)
{
	int s[10000];
	int n,i;
	printf("请输入一个十进制整数:");
	scanf("%d",&n);
	for (i=0;n>0;i++){
		s[i]=n%2;
		n/=2; }
	for (i--;i>=0;i--)
		printf("%d",s[i]);
	putchar('\n');
	return 0;
}
	
