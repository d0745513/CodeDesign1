#include <stdio.h>

char result[] = "000000000000";
void fun( int n, int b );

void fun( int n, int b ){
    int i = sizeof(result) - 1;
    while( n > 0){
        result[i--] = (char) (n % b + (int)'0');
        n = (int) n / b;
    }
}

int main ( void ){
    int n = 0, b = 0;
    scanf( "%d%d", &n, &b );
    fun( n, b );
    printf("%12s\n", result);
}
