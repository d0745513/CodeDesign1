#include <stdio.h>

int main( void ){
    unsigned int n = 0;
    scanf( "%d", &n );
    for ( int i = 1; i <= n; i++){
        for ( int j = 1; j <= n; j++ ){
            printf("%d\t", i * j );
        }
        puts("");
    }
}