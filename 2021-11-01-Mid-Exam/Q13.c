#include <stdio.h>
#include <math.h>

int isPrime(int n );

int isPrime(int n ){
    int flag = 1;
    for ( int i = 2; i < n / 2 + 1; i ++){
        if( n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main (void){
    int n = 0 , flag = 0;
    scanf("%d", &n);
    for ( int i = 2 ;i < n / 2 + 1; i++){
        if (n % i == 0 && isPrime(i)){
            if(isPrime(n / i)){
                printf("%d %d", i, n / i);
                flag = 1;
                break;
            }
        }
    }
    if( !flag ){
        printf("%s", "No");
    }
    puts("");
}