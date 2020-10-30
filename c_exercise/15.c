#include<stdio.h>
int average(int s[], int i)
{
	int sum,n=0;
	double x;
	for (;n<i;n++)
		sum+=s[n];
	x=(double)sum/i;
	return x;
}


int main(void)
{
	int s[10000];
	int n,i;
	printf("请输入输入数字的个数:");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("s[%d]=",i);
		scanf("%d",&s[i]); }
	printf("它们的平均值为:%d\n",average(s,n));
	return 0;
}
