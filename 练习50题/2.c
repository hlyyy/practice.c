#include<stdio.h>

int main() 
{
    int a,b;

    printf("请输入两门课的成绩");
    scanf("%d%d",&a,&b);
    if (a<0 || a>100 || b<0 || b>100)
    {
        printf("it is error\n");
        return 0;
    }
    a /= 10;
    b /= 10;
    switch (a)
    {
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        switch (b)
        {
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("it is pass\n");
            break;
        
        default:
            printf("it is not pass\n");
            break;
        }
        break;
    
    default:
        printf("it is not pass\n");
        break;
    }
    return 0;
}