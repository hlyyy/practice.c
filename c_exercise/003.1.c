#include<stdio.h>
int main(void) {
	int a=5,i=1,b;
	for (;a>0;i++) {
		for (b=i-1;b>0;b--) {
			printf(" ");
		}
		for (b=a;b>0;b--) {
			printf("*");
		}
		printf("\n");
		a=a-2;
	}
}


