#include <stdio.h>
#include <stdlib.h>
void daxiao(int s[],int n)
{
    int temp, i;
    for (;n > 1;n--)
    {
        for (i = 0;i < n-1;i++)
        {
            if (abs(s[i]) < abs(s[i+1]))
            {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }

    }
}

int main()
{
    int n,i;
    int s[100];
    scanf("%d",&n);
    for (i = 0;i < n;i++)
        scanf("%d",&s[i]);
    daxiao(s,n);
    for (i = 0;i < n;i++)
        printf("%d ",s[i]);
    return 0;
}