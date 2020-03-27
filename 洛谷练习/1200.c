#include<stdio.h>

int main(void) {
	int a=1,b=1,i=0;
	char str[7],str1[7];
	scanf("%s%s",str,str1);
	do {
		a *= str[i]-'@';
		i++;
	} while(str[i] != '\0');
	i=0;
	do {
		b *= str1[i]-'@';
		i++;
	} while(str1[i] != '\0');
	if (a % 47 == b % 47)
		printf("GO");
	else
		printf("STAY");
	return 0;
}


