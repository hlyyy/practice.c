#include<stdio.h>

int main()
{
	long int a, b;
	scanf("%lx",&a);
	//printf("%o",a>>16);
	//printf("%o",a<<16);`
	b = (a << 16)+(a >> 16 & 0x0000ffff);
	//printf("%lu\n",sizeof(long int));
	printf("%lx\n",b);
	return 0;
}
