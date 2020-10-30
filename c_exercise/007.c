#include<stdio.h>
int main(void)
{
	int n,i,a;
	a=1;
	printf("请输入要输入的数字个数:");
	scanf("%d",&n);
	int s[n];
	for (i=0;i<n;i++) {
		scanf("%d",&s[i]);
		if (s[i]%2!=0)
			a*=s[i]; }
	printf("其中奇数的乘积为%d\n",a);
	return 0;
}



