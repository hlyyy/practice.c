#include <stdio.h>
#include <string.h>

int c[100];
int compare(char a[], char b[]);
void minus(char a[], char b[], int l1, int l2);

int main()
{
    int i, j, l1, l2;
    char a[100], b[100];

    gets(a);
    fflush(stdin);
    gets(b);
    l1 = strlen(a) - 1;
    l2 = strlen(b) - 1;
    if (compare(a, b))
    {
        minus(a, b, l1, l2);
    }
    else
    {
        printf("-");
        minus(b, a, l2, l1);
    }
    i = 100;
    while (c[i] == 0 && i != 0)
    {
        i--;
    }
    for (j = i; j >= 0; j--)
    {
        printf("%d", c[j]);
    }
    printf("\n");
    return 0;
}

int compare(char a[], char b[]) //比较a,b的大小
{
    int i, j;
    if (strlen(a) < strlen(b))
    {
        return 0;
    }
    else if (strlen(a) > strlen(b))
    {
        return 1;
    }
    j = strlen(a);
    for (i = 0; i < j; i++)
    {
        if (a[i] < b[i])
        {
            return 0;
        }
    }
    return 1;
}

void minus(char a[], char b[], int l1, int l2) //两数逐位相减
{
    int i, j, n;
    char k;
    for (i = 0; i < l1; i++, l1--)
    {
        k = a[i];
        a[i] = a[l1];
        a[l1] = k;
    }
    for (i = 0; i < l2; i++, l2--)
    {
        k = b[i];
        b[i] = b[l2];
        b[l2] = k;
    }
    j = strlen(a);
    for (i = 0; i < j; i++)
    {
        n = strlen(b);
        if (i >= n)
        {
            c[i] = a[i] - '0';
        }
        else
        {
            c[i] = a[i] - b[i];
        }
    }
    j = strlen(a);
    for (i = 0; i < j; i++)
        while (c[i] < 0)
        {
            c[i] += 10;
            c[i + 1] -= 1;
        }
}