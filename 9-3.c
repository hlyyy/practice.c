#include<stdio.h>
#define num 5
int main(void)
{
	int i;
	char s[num][128];

	for (i=0;i<num;i++) {
		printf("s[%d]=",i);
		scanf("%s",s[i]); }

	for (i=0;i<5;i++)
		printf("s[%d]=\"%s\"\n",i,s[i]);
	return 0;
}
