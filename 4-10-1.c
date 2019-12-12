#include<stdio.h>
int main(void) {
	int a;
	printf("请输入一个正整数");
	scanf("%d",&a);
	if (a>0) {
		while (a-->0) {
			putchar('*');
			printf("\n");
		}
	}
	return 0;
}
