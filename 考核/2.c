#include<stdio.h>
int main(void)
{
	int s[4][4],c[4][4];
	int i,j;
	printf("请输入16个整数:");
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++) {
			scanf("%d",&s[i][j]);
		   	c[3-j][i]=s[i][j]; 
		}
	}
	for (i=0;i<4;i++) {
		for (j=0;j<4;j++)
			printf("%d ",c[i][j]);
		putchar('\n');
	}
	return 0;
}



