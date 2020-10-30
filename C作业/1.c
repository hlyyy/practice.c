#include <stdio.h>

int main()
{
    unsigned short int a, b, c, d, max, min;

    printf("输入四个短整数：");
    scanf("%hd%hd%hd%hd", &a, &b, &c, &d);

    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;

    min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    if (min > d)
        min = d;

    printf("max = %hu, value = %hd\n", max, max);
    printf("min = %hu, value = %hd\n", min, min);
    printf("两数之差为%u\n",max - min);
    return 0;
}
