#include<stdio.h>
int min3 (int a,int b,int c)
{	int min=a;
	if (b<min) min=b;
	if (c<min) min=c;
	return min;
}

int main(void)
{	int x,y,z;
	printf("请输入三个整数\n");
	printf("x的值为:");scanf("%d",&x);
	printf("y的值为:");scanf("%d",&y);
	printf("z的值为:");scanf("%d",&z);
	printf("三个数中最小的是%d\n",min3(x,y,z));
	return 0;
}
	
