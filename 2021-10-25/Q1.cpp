#include <stdio.h>

void fun(int n);

void fun(int n){
    for (int i = 1; i<=n; i++) {
        if( n % i == 0){
            printf("%d ", i);
        }
    }
    puts("");
}

int main ( void ){
    unsigned int n = 0;
    scanf("%d", &n);
    fun(n);
}
