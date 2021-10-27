#include <stdio.h>

void fun( int n );

void fun ( int n ){
    int tmpSum = 0, i = 1;
    short int flag = 0, count = 0;
    char outStr[1000];
    printf("%d-----\n", n);
    for ( int i = 1; i <= (int) n/2; i++){
        tmpSum = 0;
        flag = 0;
        for ( int j = i; j <= n; j++){
            tmpSum += j;
            if (tmpSum == n){
                flag = 1;
                count ++;
                break;
            }
        }
        if ( flag ){
            tmpSum = 0;
            for ( int j = i; j <= (int) n; j++){
                tmpSum += j;
                if (tmpSum < n){
                    printf("%d+", j);
                }else if(tmpSum == n){
                    printf("%d", j);
                    puts("");
                    break;
                }
            }
        }
    }
    if (count == 0){
        printf("%s\n", "No");
    }
}

int main ( void ){
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    int minVal = n > m ? m : n;
    int maxVal = n > m ? n : m;
    for (int i = minVal; i <= maxVal; i++){
        fun( i );
    }
}
