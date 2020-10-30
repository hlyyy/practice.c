#include<stdio.h>

int main()
{
    int s1[10] = {0};
    int n;
    char s[1005];
    scanf("%s",s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        n = s[i] - '0';
        s1[n]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (s1[i] != 0)
        {
            printf("%d:%d\n",i,s1[i]);
        }
    }
    return 0;
}