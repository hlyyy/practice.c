#include<stdio.h>
int main(void)
{
	int i,ch;
	while ((ch = getchar()) != EOF)
		putchar (ch);
	i=0;
	if (ch=='\n')
		i++;
	printf("标椎输入中出现的行数%d\n",i);
	return 0;
}

