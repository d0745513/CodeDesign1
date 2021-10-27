#include <stdio.h>

int main ( void ){
    unsigned int n = 0, total = 0;
    scanf("%d", &n);
    for ( unsigned int i = 1; i <= n; i++){
        total += i * (i + 1);
    }
    printf("%d\n", total);
}