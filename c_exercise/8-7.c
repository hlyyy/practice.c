#include<stdio.h>
int combination(int n, int r)
{
	 int i;
	 if (r==n || r==0)
		return  i=1;
	 else if (r==1)
		return  i=n;
	 return i=combination(n-1,r-1)+combination(n-1,r);
}
int main(void)
{
	int n,r;
	printf("请输入n,r的值:");
	scanf("%d%d",&n,&r);
	printf("从%d个不同的整数中取出%d个整数的组合数为%d\n",n,r,combination(n,r));
	return 0;
}
