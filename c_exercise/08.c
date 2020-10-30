#include<math.h>
#include<stdio.h>
int main(void)
{
	double a,b,c,d;
	printf("请输入一元二次方程中a,b,c的值:");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if (d<0)
		printf("此一元二次方程无解\n");
	else if (d==0)
		printf("此二元一次方程有唯一解为%f\n",(-b)/2/a);
	else
		printf("此一元二次方程有两解，为%f和%f\n",(-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
	return 0;
}

