#include <stdio.h>

int fun( int n );

int fun( int n ){
    int i = 1;
    long long int val = n;
    while ( val <= 100000 ){
        val *= n; 
        i++;
    }
    return i;
}

int main ( void ){
    int n = 0;
    scanf( "%d", &n );
    printf("%d\n", fun( n ));
}