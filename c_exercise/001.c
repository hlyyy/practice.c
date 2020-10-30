#include<stdio.h>
int main(void)
{
	double a,b,c,d;
	printf("请输入三个实数:");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (c>b) {
		d=c;c=b;b=d; }
	if (b>a) {
		d=b;b=a;a=d; }
	if (a>b+c)
		printf("0\n");
	else if (a==b && b==c)
			printf("1\n");
	else if (a==b || b==c)
			printf("2\n");
	else 
		printf("3\n");
	return 0;
}


