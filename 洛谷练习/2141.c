#include<stdio.h>

int main(void) {
	int a,i,x,b,c=0;
	scanf("%d",&a);
	int s[a],h[a];
	for (i=0;i<a;i++) {
		scanf("%d",&s[i]);
		h[i]=1;
	}
	for (i=0;i<a-1;i++) {
		for (x=i+1;x<a;x++) {
			for (b=0;b<a;b++) {
				if (s[i]+s[x] == s[b] && h[b] == 1) {
					c++;
					h[b]=0;
				}
			}
		}
	}
	printf("%d\n",c);
	return 0;
}

