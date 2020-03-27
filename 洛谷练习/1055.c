#include<stdio.h>

int main(void) {
	int w;
	char str[14];
	scanf("%s",str);
	w = (str[0]-'0')*1+(str[2]-'0')*2+(str[3]-'0')*3+(str[4]-'0')*4+(str[6]-'0')*5+(str[7]-'0')*6+(str[8]-'0')*7+(str[9]-'0')*8+(str[10]-'0')*9;
	if (w%11 == 10) {
		if (str[12] == 'X') {
			printf("Right\n");
			return 0;
		}
		else {
			str[12] = 'X';
			printf("%s\n",str);
			return 0;
		}
	}
	if (w%11 == (str[12]-'0')) 
		printf("Right\n");
	else {
		str[12]=w%11+'0';
		printf("%s\n",str);
	}
	return 0;
}


