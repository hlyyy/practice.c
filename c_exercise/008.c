#include<stdio.h>
int main(void)
{
	int n,i,j;
	double a=0;
	printf("请输入有几个评委:");
	scanf("%d",&n);
	int s[n];
	printf("请输入评委的分数:");
	for (i=0;i<n;i++)
		scanf("%d",&s[i]);
	for (i=0;i<n;i++) {
		for(j=n-1;j>i;j--) {
			if (s[j]<s[j-1]) {
				int temp=s[j];
				s[j]=s[j-1];
				s[j-1]=temp; }
		}
	}
	for (i=1;i<n-1;i++)
		a+=s[i];
	printf("去掉最高分和最低分后，平均值为:%.2f\n",a/(n-2));
	return 0;
}


