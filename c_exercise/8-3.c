#include<stdio.h>
#define swap(int,a,b) int x ;x=a ; a=b ; b=x ;
int main(void)
{	int a,b;
	printf("请输入a,b的值:");
	scanf("%d%d",&a,&b);
	printf("将a,b的值交换");
	swap(int,a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}	
