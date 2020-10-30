#include<stdio.h>
#include<string.h>
#include<ctype.h>

int separation(char s[], char a[][15], int p[],int len);
void exchange(char a[][15], int p[], int j);

int main()
{
    char s[105];
    char a[50][15];
    int p[50];
    int len, i, j;
    memset(p, 0, sizeof(p));
    memset(a, '0', sizeof(a));

    gets(s);
    len = strlen(s);

    j = separation(s, a, p, len);
    exchange(a, p, j);

    for(i = 0; i < j; i++)
        printf("%s(%d)\n", a[i], p[i]);
    return 0;
}

int separation(char s[], char a[][15], int p[], int len)
{
    int i, t, tag = 0, j = 0, k = 0;
    for (i = 0; i < len; i++)
        s[i] = tolower(s[i]);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            a[j][k++] = s[i];
            tag = 1;
        }
        else if (tag == 1)
        {
            tag = 0;
            a[j][k] = '\0';
            j++;
            k = 0;
        }
        for (t = 0; t < j - 1; t++)
        {
            if(strcmp(a[t], a[j - 1]) == 0)
            {
                p[t]++;
                j--;
                memset(a[j], '0', sizeof(a[j]));
            } 
        }
    }

    for(i = 0; i < j; i++)
        p[i]++;
    return j;
}

void exchange(char a[][15], int p[], int j)
{
    int i, t, x;
    char temp[15];
    memset(temp, '0', sizeof(temp));
    
    for(i = 0; i < j; i++)
    {
        int max = i;
        for(t = i + 1; t < j; t++)
            if (p[max] < p[t])
                max = t;
        
        if (max != i)
        {
            x = p[max];
            p[max] = p[i];
            p[i] = x;

            strcpy(temp, a[max]);
            strcpy(a[max], a[i]);
            strcpy(a[i], temp);
        }
    }

    
    for(i = 0; i < j - 1; i++)
    {
        for(t = 0; t < j - 1 - i; t++)
        {
            if (p[t] == p[t+1])
            {
                if (strcmp(a[t], a[t+1]) > 0)
                {
                    x = p[t+1];
                    p[t+1] = p[t];
                    p[t] = x;

                    strcpy(temp, a[t+1]);
                    strcpy(a[t+1], a[t]);
                    strcpy(a[t], temp);
                }
            }
        }
    }
}