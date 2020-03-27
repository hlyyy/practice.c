#include<stdio.h>

int main(void) 
{
    int s[7];
    int i,n=0,a,b,c=0;
    for (i=0;i<7;i++) 
    {
        scanf("%d%d",&a,&b);
        s[i]=a+b;
        if (s[i]>8 && s[i]>c) {
			c=s[i];
            n=i+1;
		}
    }
	printf("%d\n",n);
    return 0;
}
    
