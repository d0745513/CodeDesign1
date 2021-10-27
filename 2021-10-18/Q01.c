#include <stdio.h>

int main ( void ){
    unsigned int n = 0, total = 0;
    scanf("%d", &n);
    for ( unsigned int i = 1; i <= n; i++){
        if ( i % 3 == 0){
            total += i;
        }
    }
    printf("%d\n", total);
}