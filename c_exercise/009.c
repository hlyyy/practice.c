#include<stdio.h>
int main(void)
{
	int year,month,day,sum=0;
	printf("请输入年月日:");
	scanf("%d%d%d",&year,&month,&day);
	switch (month) {
		case 2: sum=31; break;
		case 3: sum=59; break;
		case 4: sum=90; break;
		case 5: sum=120; break;
		case 6: sum=151; break;
		case 7: sum=181; break;
		case 8: sum=212; break;
		case 9: sum=242; break;
		case 10: sum=273; break;
		case 11: sum=303; break;
		case 12: sum=334; break;
	}
	sum+=day;
	if (year%4==0 && month>2)
		sum++;
	printf("这一年过的天数为:%d\n",sum);
	return 0;
}





		

