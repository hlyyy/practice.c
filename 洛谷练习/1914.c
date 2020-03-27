#include<stdio.h>

int main() {
	char str[51];
	int n,i;
	scanf("%d",&n);
	n%=26;
	scanf("%s",str);
	for (i=0;str[i]!='\0';i++) {
		if (str[i]-96+n>26)
			str[i]+=n-26;
		else str[i]+=n;
	}
	printf("%s\n",str);
	return 0;
}

		
