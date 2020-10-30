#include<stdio.h>
int main() {
	int b=1,i,n,a;
	printf("1 ");
	for (i=2;i<101;i++) {
		for(n=2;n<i;n++) {
			a=i%n;
			if (a==0) {
				break;
			}
		}
		if (a!=0) {
			printf("%d ",i);
			b++;
		}
		if (b%5==0) {
			printf("\n");
		}
	}
}



