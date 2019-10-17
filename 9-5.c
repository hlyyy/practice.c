#include<stdio.h>
int str_char(const char s[], int c)
{
	int i=0;
	while (s[i]) {
		if (s[i]=='c')
			return i;
		else 
			i++;
	}
	return -1;

}

int main(void)
{
	char s[128];
	int c;
	printf("请输入字符串:");
	scanf("%s",s);
	printf("请输入字符:");
	scanf("%d",&c);
	printf("字符串中含有该字符的下标为:%d\n",str_char(s,c));
	return 0;
}
