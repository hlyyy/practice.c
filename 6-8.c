#include<stdio.h>
int min_of(const int v[],int n)
{
	int i;
	int min;
	for(i=1;i<=n;i++) {
	min=v[0];
	if (v[i]<min)
	min=v[i];}
	return min; }

int main(void)
{	
	int i,n;
	int v[n];
	printf("请输入数组中元素的个数:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&v[i]);
	printf("数组中最小的元素是%d。\n",min_of(v,n));
	return 0;
}
	
	
	
