#include <stdio.h>
int main(void)
{
	int retry;
	do {
		int no;
		printf("请输入一个整数：");
		scanf("%d",&no);
		if (no==0)
		printf("这个整数为0\n");
		else if (no>0)
		printf("这个整数为正数\n");
		else 
		printf("这个整数为负数\n");
		
		printf("是否继续？<yes...0/no...9>"); scanf("%d",&retry);
	}while (retry==0);
		return 0;
}
		
