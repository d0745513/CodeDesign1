#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1, result = 1;
    
    scanf("%d", &v1);
    while ( v1 > 1){
        result *= v1--;
    }
    printf("%d\n", result);
}