#include <stdio.h>
int main(void)
{
	int i,j,a,b,c;
	printf("让我们来画一个正方形。\n");
	printf("一边:"); scanf("%d",&a);
	printf("另一边:"); scanf("%d",&b);
	if (a>b) {
		c=b;b=a;a=c;}
	for (i=1;i<=a;i++) {
		for (j=1;j<=b;j++)
		putchar('*');
	putchar('\n');}
	return 0;
}
