#include <stdio.h>

int main (void){
    int n;
    char c;
    scanf("%d", &n);
    scanf("%c", &c);
    scanf("%c", &c);
    for ( int i = 0; i < n; i ++ ){
        for (int j = 0; j <= i;j++){
            printf("%c", c);
        }
        puts("");
    }
    for ( int i = n-1; i >= 0; i -- ){
        for (int j = 0; j <= i;j++){
            printf("%c", c);
        }
        puts("");
    }
    // printf("%c\n", c);
}