#include<stdio.h>
void intary_rcpy(int v1[],const int v2[],int n)
{	int i;
	for(i=0;i<n;i++)
	v1[i]=v2[n-1-i];	}
int main(void)
{
	int n,i;
	printf("请输入数组的元素个数:");
	scanf("%d",&n);
	int v1[n],v2[n];
	printf("输入数组v2[]的元素。");
	for(i=0;i<n;i++)
	scanf("%d",&v2[i]);
	intary_rcpy(v1,v2,n);
	for(i=0;i<n;i++)
	printf("v1[%d]=%d\n",i,v1[i]);
	return 0;
}
	
