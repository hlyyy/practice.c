#include<stdio.h>
int main (void)
{
	char s[100]="abcd1234";
	char str[100];
	int i=0,n;
	printf("字符串为:%s\n",s);
	do {
		i++;} while (s[i+1]!='\0');

	for (n=0;n<i+1;n++)
		str[n]=s[i-n];
	str[i+1]='\0';
	printf("翻转之后的字符串为%s\n",str);
	return 0;
}
	


	
