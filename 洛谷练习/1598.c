#include<stdio.h>

int main(void) {
	char str[4][101];
	int i,n,s[26];
	for (i=0;i<4;i++) {
		gets(str[i]);
	}
	for (i=0;i<26;i++) 
		s[i]=0;
	for (i=0;i<4;i++) {
		for (n=0;str[i][n]!='\0';n++) {
			s[str[i][n]-'A']++;
		}
	}
	n=s[0];
	for (i=1;i<26;i++) {
		if (s[i]>n)
			n=s[i];
	}
	for (;n>0;n--) {
		for (i=0;i<26;i++) {
			if (s[i]>=n) {
				printf("* ");
			}
			else 
				printf("  ");
		}
		printf("\n");
	}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X V Z\n");
	return 0;
}







