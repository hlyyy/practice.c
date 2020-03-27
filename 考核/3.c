#include<stdio.h>
int main(void)
{
	int i,j;
	printf("1 ");
	for (i=1;i<1001;i++) {
		int sum=0;
		for (j=1;j<i;j++) {
			if (i%j==0)
				sum+=j;
		}
		if (i==sum)
			printf("%d ",i);
	}
	return 0;
}


