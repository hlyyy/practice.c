#include<stdio.h>

int main(void) {
	int x,n,s,i;
	scanf("%d%d",&x,&n);
	for (i=0;n>0;n--) {
		switch (x)
		{
		case 1 :
		case 2 :
		case 3 :
		case 4 :
		case 5 : 
			x++;
			i++;
			break;
		case 6 : 
			x++;
			break;
		case 7 : 
			x=1;
			break;
		}
	}
	printf("%d\n",250*i);
	return 0;
}



