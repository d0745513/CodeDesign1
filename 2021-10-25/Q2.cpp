#include <stdio.h>

unsigned long long int fun( int n );

unsigned long long int fun( int n ){
    unsigned long long int result = 1;
    for ( int i = n; i > 1; i --){
        result *= i;
    }
    return result;
}

int main ( void ){
    int n = 0;
    scanf("%d", &n);
    printf("%lld\n", fun( n ));
}