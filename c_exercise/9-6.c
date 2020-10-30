#include<stdio.h>
int str_chnum(const char s[],int c)
{
	int n,i=0;
	while (s[n]) {
		if (s[n]==c)
			i++;
		n++;}
	return i;
}
int main(void)
{
	int c;
	char s[128];
	printf("请输入字符串:");
	scanf("%s",s);
	printf("字符中c的个数为%d\n",str_chnum(s,c));
	return 0;
}


