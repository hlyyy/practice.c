#include<stdio.h>

int main()
{
    int s[1000], n;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}