#include <stdio.h>
int main(void)
{
	int i;
	char s[] ="ABC";
	for (i=0;i<4;i++)
		s[i]='\0';
	printf("%s\n",s);
	return 0;
}
