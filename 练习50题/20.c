#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d",&m);
    while (m-- > 0)
    {
        int j = 1;
        double sum = 0;
        scanf("%d",&n);
        for (int i = 1; n > 0; n--)
        {
            sum += (1.0 / i) * j;
            i++;
            j *= -1;       
        }
        printf("%0.2f\n",sum);
    }
    return 0;
}