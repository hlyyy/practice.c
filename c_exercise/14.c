 #include<stdio.h>
int main(void)
{
	int n,i,j;
	i=2; j=0;
	printf("请输入一个正整数:");
	scanf("%d",&n);
	printf("%d=",n);
	do {if (n%i==0){
		n/=i;
		printf("%d",i);
		j++;
		i++;}	} while (j==0);
	i=2;
	do {
		if (n%i==0) {
			n/=i;
			printf("*%d",i);
			i-=1;}
		i++;} while (n!=1);
	    putchar('\n');
	return 0;
}


