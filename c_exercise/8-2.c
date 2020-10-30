#include<stdio.h>
#define max(x,y) (((x) >(y) ? (x) : (y)))
int main(void)
{		int a,b,c,d;
		printf("请输入a,b,c,d的值:");
		scanf("%d%d%d%d",&a,&b,&c,&d);
		printf("a,b,c,d中最大值为%d",max(max(a,b),max(c,d)));
		return 0;
}
