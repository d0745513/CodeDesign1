#include <stdio.h>

int main ( void ){
    unsigned int n = 0, total = 0, count = 0;
    scanf( "%d", &n );
    while ( n > 0){
        count ++;
        total += n % 10;
        n = (int) n / 10;
    }
    printf("%d\n", count);
    printf("%d\n", total);
}