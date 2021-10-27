#include <stdio.h>

int main ( void ){
    unsigned int n = 0;
    double y = 0.0;
    scanf("%d", &n);
    for (unsigned int i = 1; i <= n; i++){
        y += (double) 1 / ((2*i-1) * (2*i));
    }
    printf("%.16lf\n", y);
}