#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];
    int i, j = 0;
    
    scanf("%s",a);
    i = strlen(a);
    do {
        if (a[j] != a[i - 1 - j])
        {
            printf("No\n");
            return 0;
        }
        j++;
    } while (j < i - 1 - j);
    printf("Yes\n");
    return 0;
}