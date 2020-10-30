#include<stdio.h>
int main(void)
{
	char s[6]="12345";
	int i=0,sum=0;
	printf("字符串:\"%s\"\n",s);
	do {
		sum=sum*10+(s[i]-'0');
		i++; } while (s[i]!='\0');
	printf("转化为整数为%d",sum);
	return 0;
}


