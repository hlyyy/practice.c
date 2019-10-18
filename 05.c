#include <math.h>
#include <stdio.h>
int main(void)
{
	double i,j,l,n;
	printf("请输入两个直角边的长度:");
	scanf("%lf%lf",&i,&j);
	n=i*i+j*j;
	l=sqr(n);
	printf("直角边的长为:%f\n",l);
	return 0;
}

