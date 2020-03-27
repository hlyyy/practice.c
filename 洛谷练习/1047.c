#include<stdio.h>

int main(void) {
	int l,m,i,a,b,c=0;
	scanf("%d%d",&l,&m);
	l++;
	int h[m][2],s[l];
	for (i=0;i<l;i++)
		s[i]=0;
	for (i=0;i<m;i++) {
		scanf("%d%d",&h[i][0],&h[i][1]);
		a=h[i][0];
		b=h[i][1];
		for (;a<=b;a++) {
			if (s[a]==0)
				s[a]=1;
		}
	}
	for (i=0;i<l;i++) {
		if (s[i]==0) 
			c++;
	}
	printf("%d\n",c);
	return 0;
}
