#include <stdio.h>
#include <math.h>

int fun( int n );

int fun( int n ){
    if ( n == 1){
        return n + 1;
    }else{
        return fun( n - 1 ) + fun( floor(n / 2) );
    }
}

int main ( void ){
    int n = 0;
    scanf( "%d", &n );
    printf("%d\n", fun( n ));
}