#include<stdio.h>
#include<math.h>

int main ()
{
    float x;
    int a = 1, b = 1;
    double term = 1, sum = 0;

    scanf("%f",&x);
    term *= x;
    sum += term;
    do {
        term = - term * (x * x) / ((a + 1) * (a + 2)); 
        sum += term;
        a = a + 2;
        b++;
    } while (fabs(term) >= 1e-5);
    
    printf("sin(x) = %f\n", sum);
    printf("%d\n", b);
    return 0;
}