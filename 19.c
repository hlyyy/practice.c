#include<stdio.h>
int main(void)
{
	double sum=100,i=1,h=100;
	for (;i<=10;i++) {
		h/=2;
		sum=sum+h*2; }
	printf("第十次落地时共经过%f\n",sum);
	printf("第十次反弹后的高度为%f\n",h/2);
	return 0;
}


