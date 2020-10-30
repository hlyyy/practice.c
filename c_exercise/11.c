#include<stdio.h>
int main(void)
{
	int s[10000];
	int i,n;
	printf("请输入要寻找斐波那契数列的第几项:");
	scanf("%d",&n);
    s[0]=1;
    s[1]=1;
    for (i=2;i<n;i++)
        s[i]=s[i-1]+s[i-2];
    printf("斐波那契数列的第%d项为%d\n",n,s[n-1]);
	return 0;
}
