#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100],a[100];
	printf("请输入两个字符串:");
	scanf("%s%s",s,a);
	if (strcmp(s,a)==0)
		printf("这两个字符串相等\n");
	else 
		printf("这两个字符串不相等\n");
	return 0;
}

