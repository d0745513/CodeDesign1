#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main ( void ){
    float maxVal = FLT_MIN, minVal = FLT_MAX, v1;
    for ( unsigned i = 0; i < 10; i++){
        scanf("%f", &v1);
        if(i == 0){
            maxVal = v1;
            minVal = v1;
        }
        maxVal = maxVal < v1 ? v1 : maxVal;
        minVal = minVal > v1 ? v1 : minVal;
    }
    printf("max: %.2f\n", maxVal);
    printf("min: %.2f\n", minVal);
}