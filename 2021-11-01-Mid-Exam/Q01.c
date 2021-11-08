#include <stdio.h>

int main( void ){
    int f = 0;
    scanf("%d", &f);
    float c = (float) (f - 32) * 5.0 / 9.0;
    printf("%.3f\n", c);
}