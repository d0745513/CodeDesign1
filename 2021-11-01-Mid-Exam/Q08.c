#include <stdio.h>

int main (void){
    int n;
    scanf("%d", &n);
    for ( int i = n; i > 0 ; i -- ){
        for (int j = 0; j < n-i;j++){
            printf("%c", ' ');
        }
        for (int j = 0; j < i;j++){
            printf("%c", '#');
        }
        puts("");
    }
}