#include<stdio.h>

int main(void) {
	int n,i,x=0,w=0;
	scanf("%d",&n);
	int s[n],h[n];
	for (i=0;i<n;i++) {
		scanf("%d",&s[i]);
	}
	for (i=0;i<n-1;i++) {
		if (s[i]<s[i+1])
			x++;
		else {
			x++;
			h[w]=x;
			w++;
			x=0;
		}
	}
	n=h[0];
	for (i=1;i<w;i++) {
		if (n<h[i])
			n=h[i];
	}
	printf("%d\n",n);
	return 0;
}

	


