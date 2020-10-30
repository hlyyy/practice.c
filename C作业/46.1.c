#include<stdio.h>

int main() {
    int a;
    double c = 1;
    //printf("c = %f\n", c * 2);
    for (a = 2; a <= 100;) {
        c *= (double)(a * a)/((a + 1)*(a - 1));
        a = a + 2;
    }
    printf("c = %f\n", c * 2);
    return 0;
}