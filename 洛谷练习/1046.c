#include<stdio.h>

int main(void) {
	int s=0,i,h1,h[10];
	for (i=0;i<10;i++) {
		scanf("%d",&h[i]);
	}
	scanf("%d",&h1);
	for (i=0;i<10;i++) {
		if (h[i]<=h1+30)
			s++;
	}
	printf("%d",s);
}
