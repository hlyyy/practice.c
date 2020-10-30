#include<stdio.h>
int main() {
	int n;
	int i=0;
	printf("请输入一个正整数:");
	scanf("%d",&n);
	for (;n!=1;) {
		if (n%2==0) {
			n=n/2;
			i++;
		} else {
			n=(3*n+1)/2;
			i++;
		}
	}
	printf("需要%d步\n",i);
}
