#include<stdio.h>
int search_idx(const int v[],int idx[],int key,int n)
{	int num,i;
	num=0;
	for(i=0;i<n;i++) {
	if (key==v[i])
	idx[num++]=i; }
	return num;
}
int main(void)
{
	int key,n,num,i;
	printf("输入数组中元素的个数："); scanf("%d",&n);
	int v[n],idx[100000];
	printf("请输入各元素的值"); 
	for(i=0;i<n;i++)
	scanf("%d",&v[i]);
	printf("请输入key的值:");
	scanf("%d",&key);
	num=search_idx(v,idx,key,n);
	printf("与key相等的元素的个数和下标为:%d\n",num);
	for(i=0;i<num;i++)
	printf("%d",idx[i]);
	return 0;
}	
	
