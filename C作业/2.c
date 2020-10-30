#include <stdio.h>

int main()
{
    long int a, change;

    printf("请输入一个长整型:");
    scanf("%lx", &a);
    if ((a >> 16) % 2 != 0)
        printf("高16位为奇数\n");
    else
        printf("高16位为偶数\n");
    if ((short int)a % 2 != 0)
        printf("低16位为奇数\n");
    else
        printf("低16位为偶数\n");

    change = ((a & 0x00ff0000)>>8) + ((a & 0x0000ff00)<<8) + ((a & 0x000000ff)<<24) + ((a & 0xff000000)>>24);
    printf("after change: %#lx\n",change);
    return 0;
}
