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
    long long int n = 0;
    int m = 0;
    short int flag = 1;
    scanf( "%lld", &n );
    for ( int i = 2; i <= (int) n / 2 + 1; i++ ){
        if ( isPrime( i ) ){
            m = (int) n / i;
            // printf("%d\t%d\n",i, m);
            if ( n % i == 0 && isPrime(m) ){
                printf("%d\t%d", i, m);
                flag = 0;
                break;
            }
        }
    }
    if (flag){
        printf("%s", "No");
    }
    puts("");
}