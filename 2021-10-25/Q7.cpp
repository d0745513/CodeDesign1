#include <stdio.h>

int fun( int n );

int fun( int n ){
    int total = n;
    while ( n >= 3 ){
        total += (int) n / 3;
        n = n % 3 + (int) n / 3;
    }
    // total += n;
    return total;
}

int main ( void ){
    int n = 0;
    scanf( "%d", &n );
    printf("%d\n", fun( n ) );
}//999 333 111 