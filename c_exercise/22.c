#include<stdio.h>
void bsort(int s[],int n)
{
	int i,j;
	for (i=0;i<n-1;i++) {
		for (j=n-1;j>i;j--) {
			if (s[j]<s[j-1]) {
				int temp=s[j-1];
				s[j-1]=s[j];
				s[j]=temp; } 
		}
	}
}
int main (void)
{
	int n;
	int s[1000];
	int i;
	printf("请输入数组中元素的个数:");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("请输入元素的值");
		scanf("%d",&s[i]); }
	bsort(s,n);
	printf("按升序排列\n");
	for (i=0;i<n;i++)
		printf("%d\n",s[i]);
	return 0;
}


		
		
