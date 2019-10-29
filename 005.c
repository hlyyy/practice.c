#include<stdio.h>
int main(void)
{
	int j,i,n=0,t=0;
	int s[1000];
	printf("1 ");
	for (i=2;i<101;i++)  {
		int n=0;
		for (j=2;j<i;j++) {
			if (i%j==0) {
				n=1;
				break; }}
			if (n==0) {
			s[t++]=i; }} 	
	do {
		printf("%d",s[n]);
		n++;
		if (n%5==0)
			printf("\n");} while (s[n]==0);
	return 0;
}
			


