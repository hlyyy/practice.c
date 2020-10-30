#include<stdio.h>

void Try(int i);

int like[5][5] = {
    {0,0,1,1,0},
    {1,1,0,0,1},
    {0,1,1,0,1},
    {0,0,0,1,0},
    {0,1,0,0,1}
};
int take[5] = {0};
int book[5] = {0};
int n = 0;

int main()
{
    Try(0);
    return 0;
}

void Try(int i)
{
    int j, k;
    for (j = 0; j < 5; j++)
    {
        if (like[i][j] > 0 && book[j] == 0)
        {
            take[i] = j;
            book[j] = 1;
            if (i == 4)
            {
                n++;
                printf("方案%d:\n",n);
                for(k = 0; k < 5; k++)
                    printf("第%d本书分给第%d个人\n",take[k]+1,k+1);
            }
            else Try(i+1);
            book[j] = 0;
        }
    }
}