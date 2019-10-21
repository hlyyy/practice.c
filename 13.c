#include<stdio.h>
int main(void)
{
	int n,i;
	int j=0;
	for (n=101;n<201;n++) {
		j=0;
		for (i=2;i<n;i++) {
			if (n%i == 0)
				j++;	}
		if (j==0)
			printf("%d\n",n);}
	return 0;
}
