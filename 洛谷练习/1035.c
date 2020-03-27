#include<stdio.h>

int main(void) {
	int n,k;
	double s=0;
	scanf("%d",&k);
	for (n=1;n>0;n++) {
		s+=(double)1/(double)n;
		if (s>k) {
			printf("%d\n",n);
			break;
		}
	}
	return 0;
}

