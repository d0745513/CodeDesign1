#include <stdio.h>
#define SIZE 20

int main ( void ){
    int data[ SIZE ] = { 0 }, n = 0, maxVal = 0, tmpVal = 0;
    scanf("%d", &n);
    for ( int i = 0; i < n; i ++ ){
        scanf("%d", &data[i]);
    }
    maxVal = data [ 0 ];
    for ( int i = 0; i < n-1; i ++ ){
        tmpVal = data[i];
        for ( int j = i+1; j < n; j ++){
            tmpVal *= data[j];
            if( maxVal < tmpVal){
                maxVal = tmpVal;
            }
        }
    }
    printf("%d\n", maxVal);
}