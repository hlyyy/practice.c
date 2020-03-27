#include<stdio.h>

int main(void) {	
	int a=0,m=0,t=0,i,c;
	for (i=1;i<13;i++) {
		a+=300;
		scanf("%d",&c);
		if (a>=c) {
			a=a-c;
			m=m+a/100*100;
			a=a-a/100*100;
		}
		else {
			a=a-c;
			t=i;
			break;
		}
	}
	if (t==0)
		printf("%.f",m*1.2+a);
	else
		printf("%d",-t);
	return 0;
}

