#include<stdio.h>

int main(void) {
	int n,x,s=0,i,t;
	scanf("%d%d",&n,&x);
	for (i=1;i<=n;i++) {
		for (t=i;t>0;t/=10) {
			if (t%10 == x)
				s++;
		}
	}
	printf("%d\n",s);
	return 0;
}
			
			

