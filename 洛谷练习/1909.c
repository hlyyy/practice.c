#include<stdio.h>

int cost(int n,int a,int b) {
	int i,s;
	long w;
	i = n / a;
	s = n % a;
	if (s != 0)
		w = (i+1)*b;
	else
		w = i*b;
	return w;
}

int main(void) {
	int i,n,a,b;
	long w=0;
	scanf("%d",&n);
	for (i=1;i<4;i++) {
		scanf("%d%d",&a,&b);
		if (w == 0)
			w = cost(n,a,b);
		if (cost(n,a,b)<w)
			w = cost(n,a,b);
	}
	printf("%ld\n",w);
	return 0;
}

			

