#include<stdio.h>
#include<math.h>

int main() 
{
    double r1, p1, r2, p2, r3, p3;
    scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
    r3 = r1 *r2 - p1 *p2;
    p3 = r1 * p2 + r2 * p1;
    if (p3 < 0)
    {
        printf("%0.2f%0.2f\n",r3,p3);
    }
    else
    {
        printf("%0.2f+%0.2f\n",r3,p3);
    }
    return 0;
}

