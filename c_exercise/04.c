#include <stdio.h>
int main(void)
{
	double j,n,i,a;
	printf("请输入一个正数:");
	scanf("%lf",&n);
	i=0;
	a=n;
	do {
		j=(i+n)/2;
		if (j*j ==a)
			break;
		else if (j*j <a) 
			i=j;
		else n=j;
	} while ((j*j-a)*(j*j-a)>0.001);
	printf("这个数的算术平方根为%f\n",j);
	return 0;
}
		
