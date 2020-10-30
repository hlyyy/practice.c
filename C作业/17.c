#include <stdio.h>

int main()
{
    int i, j, k, n = 0;
    
    for (i = 30; i > 0; i--)
    {
        for (j = 75; j > 0; j--)
        {
            k = 100 - i - j;
            if (5 * i + 2 * j + k == 150)
            {
                n++;
                printf("方案%d:5分%d个;2分%d个;1分%d个\n", n, i, j, k);
            }
        }
    }

    return 0;
}