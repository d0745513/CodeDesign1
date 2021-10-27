#include <stdio.h>

unsigned long long int factorial( int n );
int zeroCount( unsigned long long int n );

unsigned long long int factorial( int n ){
    unsigned long long int result = 1;
    while (n > 1){
        result *= n--;
    }
    return result;
}

int zeroCount( unsigned long long int n ){
    if ( n % 10 > 0){
        return 0;
    }else{
        return 1 + zeroCount( (unsigned long long int) n / 10 );
    }
}

int main ( void ){
    int n = 0;
    scanf( "%d", &n );
    printf("%d\n", zeroCount( factorial(n) ));
}