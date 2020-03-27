#include<stdio.h>
int main(void)
{
	int n,i=2,j=0;
	printf("请输入一个正整数:");
	scanf("%d",&n);
	printf("%d=",n);
	do {
		if (n%i==0) { 
			printf("%d",i);
			n/=i;
			j=1;	}
		i++; } while (j==0);
	i=2;
	do {
		if (n%i==0) {
			printf("*%d",i);
			n/=i;
			i--; }
		i++; } while (n!=1);
	return 0;
}




	


