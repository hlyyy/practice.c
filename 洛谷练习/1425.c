#include<stdio.h>

int main(void){
	int a,b,c,d,e,f;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (b<=d)
		printf("%d %d\n",c-a,d-b);
	else 
		printf("%d %d\n",c-a-1,d+60-b);
	return 0;
}

