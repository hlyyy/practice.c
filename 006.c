#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void daxiao(int s[],int n)
{
	int i,j;
	for (i=0;i<n;i++) {
		for (j=n-1;j>0;j--) {
			if (abs(s[j])>abs(s[j-1])) {
				int temp=s[j];
				s[j]=s[j-1];
				s[j-1]=temp;}}}
}
int main(void)
{
	int s[100];
	int i,n;
	printf("请输入你要输入的数字的个数:");
	scanf("%d",&n);
	printf("请输入数字:");
	for (i=0;i<n;i++)
		scanf("%d",&s[i]);
	daxiao(s,n);
	for (i=0;i<n;i++)
		printf("%d ",s[i]);
	return 0;
}




