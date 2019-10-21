#include<stdio.h>
int main(void)
{
	int n,i,j,s;
	for (n=100;n<1000;n++) {
		i=n%10;
		j=(n/10)%10;
		s=n/100;
		if (n==i*i*i+j*j*j+s*s*s)
			printf("%d\n",n); }
	return 0;
}

