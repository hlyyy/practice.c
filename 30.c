#include<stdio.h>

int main()
{
	long int a, b;

	scanf("%lx",&a);
	printf("%lx\n",a << 24);
	b = (a << 24) + ((a >> 24) & 0x000000ff) + ((a & 0x00ff0000) >> 8) + ((a & 0x0000ff00) << 8);
	printf("%lx\n",b);
	return 0;
}
