#include<stdio.h>
int main(void)
{
	int A,B;
	puts("请输入两个整数。");
	printf("整数A:"); scanf("%d",&A);
	printf("整数B:"); scanf("%d",&B);
	if (A==B)
	printf("A和B相等。"); 
	else if(A>B)
	printf("A大于B。");
	else 
	printf("A小于B。");
	return 0;
}
