#include <stdio.h>

int main ()
{
    char s[100];
    int i, n;

    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'c')
        {
            for (n = i; s[n] != '\0'; n++)
                s[n] = s[n + 1];
            i--;
        }
    }

    printf("%s\n", s);
    return 0;
}