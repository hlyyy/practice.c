#include<stdio.h>

int main()
{
    union stu {
        long a;
        char b[4];
    } x = {0x41424344};
    
    printf("%ld\n",x.a);
    return 0;
}