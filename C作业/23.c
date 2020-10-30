#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    char temp;
    int i, t;

    scanf("%s", s);
    i = strlen(s);
    for (t = 0; t <= i / 2; t++)
    {
        temp = s[t];
        s[t] = s[i - t - 1];
        s[i - t - 1] = temp;
    }
    printf("%s\n",s);
    return 0;
}