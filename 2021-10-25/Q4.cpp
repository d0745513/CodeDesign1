#include <stdio.h>

short int isPrime( int n );

short int isPrime( int n ){
    short int flag = 1;
    for ( int i = 2; i < (int)n/2 + 1; i ++ ){
        if ( n % i == 0 ){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main ( void ){
    int n = 0, m = 0;
    scanf( "%d%d", &n, &m );
    int minVal = n > m ? m : n;
    int maxVal = n > m ? n : m;
    for ( int i = minVal; i <= maxVal; i++ ){
        if ( isPrime( i ) && i > 1 ){
            printf("%d ", i);
        }
    }
    puts("");
}
