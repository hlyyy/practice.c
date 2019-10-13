#include<stdio.h>
void put_count()
{	static int i=1;
	printf("put_count:第%d次\n",i);
	i++;
}
int main(void)
{
	int n;
	for(n=0;n<3;n++)
	put_count();
	return 0;
}
	
