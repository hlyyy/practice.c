#include<stdio.h>

void max_min (int s[],int n)
{
    int i, temp;
    for (;n > 1;n--)
    {
        for (i = 0;i < n - 1;i++)
        {
            if (s[i] < s[i+1])
            {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    int s[100];
    double sum = 0;

    scanf("%d",&n);
    if (n <= 2 || n > 100)
    {
        printf("输入的人数有误");
        return 0;
    }
    for (int i = 0;i < n;i++)
    {
        scanf("%d",&s[i]);
    }
    max_min(s, n);
    for (int i = 1;i < n - 1;i++)
    {
        sum += s[i];
    }
    printf("得分为 %0.2f\n",sum / (n - 2));
    return 0;
}