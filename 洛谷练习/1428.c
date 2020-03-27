#include<stdio.h>

int main(void) {
	int n,i,x,a;
	scanf("%d",&n);
	int s[n],h[n];
	for (i=0;i<n;i++) {
		a=0;
		scanf("%d",&s[i]);
		for (x=0;x<i;x++) {
			if (s[x]<s[i])
				a++;
		}
		h[i]=a;
	}
	for (i=0;i<n;i++)
		printf("%d ",h[i]);
	return 0;
}


