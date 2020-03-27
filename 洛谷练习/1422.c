#include<stdio.h>

int main(void){
	int a;
	scanf("%d",&a);
	if (a<=150)
		printf("%.1f\n",0.4463*a);
	else if (151<=a && a<=400)
		printf("%.1f\n",(a-150)*0.4663+150*0.4463);
	else 
		printf("%.1f\n",(a-400)*0.5663+150*0.4463+250*0.4663);
	return 0;
}
