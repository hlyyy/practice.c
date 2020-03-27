#include<stdio.h>
int main(void)
{
	char a[1000],b[1000],c[1000];
	int a1,b1,c1,i,n;
	printf("请输入两个整数:");
	scanf("%s %s ",a,b);
	for (i=0;a[i]!='\0';i++) 
		a1=a[i]-'0'+a1*10; 
	for (i=0;b[i]!='\0';i++) 
		b1=b[i]-'0'+b1*10; 
	c1=a1+b1;
	printf("%d",c1);
	i=0;
	do {
		c[i]=c1%10+'0';
		c1/=10;
		i++;} while (c1!=0);
	c[i-1]='\0';
	for (n=i-2;n>=0;i--)
		;
	return 0;
}




