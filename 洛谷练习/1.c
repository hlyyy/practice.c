#include<stdio.h>
#include<string.h>
int main()
{
    char a[4][100];
    int i, j, t, letter[26]={0}, max, len;
    memset(a, 0, sizeof(char)*300);
    for(i=0; i<4; i++)
        gets(a[i]);
    for(i=0; i<4; i++)
    {
        len = strlen(a[i]);
        for(j=0; j<len; j++)
            if(a[i][j]>='A' &&a[i][j]<='Z')
            {
                t=a[i][j]-'A'; 
                letter[t]++;
            }    
    } 
    max = 0;
    for(i=0; i<26; i++)
        if(max<letter[i]) max=letter[i];
    for(j=max; j>=1; j--)
    {
        for(i=0; i<26; i++)
        {
            if(letter[i]>=j) 
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
        printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
    return 0;
}
