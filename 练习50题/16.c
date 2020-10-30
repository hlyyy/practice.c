#include<stdio.h>

int main()
{
    int n;
    char s[101];
    
    scanf("%d",&n);
    for (;n > 0;n--)
    {
        char s[101];
        int a[5] = {0};
        gets(s);
        for (int i = 0;s[i] != '\0';i++)
        {
            switch (s[i])
            {
            case 'a':
                a[0]++;
                break;
            case 'e':
                a[1]++;
                break;
            case 'i':
                a[2]++;
                break;
            case 'o':
                a[3]++;
                break;
            case 'u':
                a[4]++;
                break;
            default:
                break;
            }
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", a[0], a[1], a[2], a[3], a[4]);
        printf("\n");
    }
    return 0;
}