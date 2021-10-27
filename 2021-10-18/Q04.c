#include <stdio.h>

int main ( void ){
    unsigned long long int factorial = 1;
    unsigned int n = 0;
    scanf("%d", &n);
    while ( n > 1){
        factorial *= n--;
    }
    printf("%lld\n", factorial);
}