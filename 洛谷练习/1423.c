#include<stdio.h>

int main(void) {
	double s=0,n,s1;
	int i=0;
	scanf("%lf",&s1);
	for (n=2;n>0;n*=0.98) {
		i++;
		s += n;
		if (s >= s1) {
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}



