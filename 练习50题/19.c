#include<stdio.h>
#include<math.h>

int main()
{
    int N;
    int x, y;
    double z, z1;
    scanf("%d",&N);
    for (;N > 0;N--)
    {
        scanf("%d%d", &x, &y);
        z = sqrt((double)(x * x + y * y));
        if (z > z1)
        {
            z1 = z;
        }
    }
    printf("%0.2f\n",z1 + 0.005);
    return 0 ;
}