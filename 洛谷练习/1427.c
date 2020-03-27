#include<stdio.h>

int main(void) {
	long s[100],a;
	int i=-1;
	do {
		i++;
		scanf("%ld",&s[i]);
	} while(s[i] != 0);
	i--;
	for (;i>=0;i--) 
		printf("%ld ",s[i]);
	return 0;
}



