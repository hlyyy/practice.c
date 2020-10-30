#include<stdio.h>
void str_toupper(char s[])
{
	int i=0;
	do {
		printf("%c",s[i]-32);
		i++;} while (s[i]!=0);
}
int main(void)
{
	char str[128];
	printf("请输入字符串:");
	scanf("%s",str);
	str_toupper(str);
	return 0;
}


