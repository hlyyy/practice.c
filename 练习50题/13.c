#include<stdio.h>

int main()
{
   int i;
   long int a, b, c;

   scanf("%d",&i);
   for(int n = 1; n <= i; n++)
   {
        scanf("%ld%ld%ld", &a, &b, &c);
        if (a + b > c)
            printf("Case #%d: true\n", n);
        else
            printf("Case #%d: false\n", n);
    }
    return 0;
}