#include<stdio.h>

int main()
{
    int i,n,s = 1;
    
    scanf("%d",&i);
    for(;i>0;i--)
    {
        scanf("%d",&n);
        if (n % 2 == 0)
            continue;
        else
            s *= n;
    }
    printf("%d\n",s);
    return 0;
}