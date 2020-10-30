#include<stdio.h>

int main()
{
    int c1, c2, hour, minute, second;
    double c;
    scanf("%d%d", &c1, &c2);
    c = (c2 - c1) / 100.0;
    hour  = c / 3600;
    c = (int)(c + 0.5) % 3600;
    minute = c / 60;
    second = (int)c % 60;
    printf("%02d:%02d:%02d\n",hour,minute,second);
    return 0; 
}