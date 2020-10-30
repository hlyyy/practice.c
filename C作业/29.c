#include<stdio.h>

int StrLoc(char a[], char b[]);

int main()
{
    char a[10], b[50];

    gets(a);
    gets(b);

    if (StrLoc(a, b) == -1)
        printf("不在其中\n");
    else 
        printf("%d\n", StrLoc(a, b));

    return 0;
}

int StrLoc(char a[], char b[])
{
    int i = 0, k = 0, t;
    for (;b[i] != '\0';i++)
    {
        k = 0;
        t = i;
        while (b[t] == a[k])
        {
            t++;
            k++;
            if (a[k] == '\0')
                return i;
        }
    }
    return -1;
}