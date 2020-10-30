#include <stdio.h>
void rev_intary(int v[],int n)
{	int temp;
	int i;	
	for(i=0;i<n/2;i++) {
	temp=v[n-1-i];
	v[i]=v[n-1-i];
	v[n-1-i]=temp;  }
}	
int main(void)
{
	int n,i;
	printf("请输入数组的元素个数:");
	scanf("%d",&n);
	printf("请输入数组个元素的值:");
	int v[n];
	for(i=0;i<n;i++)
	scanf("%d",&v[i]);
	rev_intary(v,n);
	printf("该数组的倒序是：");
	for (i=0;i<n;i++) 
	printf("v[%d]=%d\n",i,v[i]);
	return 0;
}
	
