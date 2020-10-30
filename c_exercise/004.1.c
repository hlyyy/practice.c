#include<stdio.h>
int main() {
	int x,y,a,b;
	printf("请输入两个正整数\n");
	scanf("%d%d",&x,&y);
	if (x<y) {
		int temp;
		temp=x;
		x=y;
		y=temp;
	}
	do {
		a=x/y;
		b=x%y;
		if (b != 0) {
			x=y;
			y=b;
		} else {
			break;
		}
	} while(b!= 0);
	printf("这两个正整数的最大公因数为%d\n",y);
}
