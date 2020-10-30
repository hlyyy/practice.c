#include<stdio.h>

int getnumber(int a);

int main ()
{
    int i;
    for (i = 1; i <= 40; i++)
        printf("%d ", getnumber(i));

    return 0;
}

int getnumber(int a)
{
    if (a == 1 || a == 2)
        return 1;
    return getnumber(a - 1) + getnumber(a - 2);
}