#include<stdio.h>

void pinyin(int a)
{
    switch (a)
    {
    case 0:
        printf("ling");
        break;
    case 1:
        printf("yi");
        break;
    case 2:
        printf("er");
        break;
    case 3:
        printf("san");
        break;
    case 4:
        printf("si");
        break;
    case 5:
        printf("wu");
        break;
    case 6:
        printf("liu");
        break;
    case 7:
        printf("qi");
        break;
    case 8:
        printf("ba");
        break;
    case 9:
        printf("jiu");
        break;
    }
}

int main()
{
    int i, sum = 0;
    int a[5] = {0};
    char s[105];
    scanf("%s",s);
    for (i = 0; s[i] != 0; i++)
        sum += s[i] - '0';
    if (sum == 0)
    {
        printf("ling\n");
        return 0;
    }
    for (i = 0; sum != 0; i++)
    {
        a[i] = sum % 10;
        sum /= 10;
    }
    i--;
    for (; i > 0; i--)
    {
        pinyin(a[i]);
        printf(" ");
    }
    pinyin(a[0]);
    printf("\n");
    return 0;
}