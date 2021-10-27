#include <stdio.h>

int main ( void ) {
    unsigned int n= 0;
    scanf("%d", &n);
    for ( unsigned i = 1; i <= n; i++){
        if ( n % i == 0 ){
            printf("%d\n", i );
        }
    }
}