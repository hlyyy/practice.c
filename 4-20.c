#include <stdio.h>
int main(void)
{
	int i,j,n;
	printf("   ");
	for (i=1;i<=9;i++)
	printf("%3d",i);
	printf("\n  1");
	for(j=1;j<=9;j++){
		for(n=1;n<=9;n++)
			printf("%3d",j*n);
		if (j+1<10)
		printf("\n  %d",j+1);}
	return 0;
}  
	
