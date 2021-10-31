#include <stdio.h>
#define SIZE 30

int main ( void ){
    char data[ SIZE ];
    int strLength = 0;
    scanf("%s", data);
    while (1) {
        if ( data[strLength ] == '\0' ){
            break;
        }
        strLength ++;
    }
    int m = (int) strLength / 2;
    int flag = 1;
    for ( int i = 0; i <= m; i ++ ){
        if (data[ i ] != data[ strLength - i -1]){
            flag = 0;
            break;
        }
    }
    printf("%s\n", flag == 1 ? "Yes" : "No");
}