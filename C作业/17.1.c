#include<stdio.h>
#include<string.h>


int main()
{
    int t[26];
    char ch;
    memset(t, 0, 26 * sizeof(int));

    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            t[ch-'A']++;
    }
    for (int i = 0; i < 26; i++)
        printf("%c (%d)\n", 'A' + i, t[i]);
    
    return 0;
}