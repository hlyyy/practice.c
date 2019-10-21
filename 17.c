#include<stdio.h>
int main(void)
{
	int sum,n,i;
	printf("1\n");
	for (n=2;n<1001;n++) {
		sum=0;
		i=2;
		do {
			if (n%i==0)  
				sum=sum+i;
				i++; 
		} while (i<n);
		if (n==sum+1)
			printf("%d\n",n);
	}
	return 0;
}

