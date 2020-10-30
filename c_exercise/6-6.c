#include<stdio.h>
void alert (int n)
{	while (n-->0)
	putchar('x');
}
int main(void)
{
	int x;
	printf("响几声:");
	scanf("%d",&x);
	alert(x);
	return 0;
}
