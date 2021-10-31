#include <stdio.h>
#define SIZE 20

void square( int arr[] );
void square( int arr[] ){
    for ( int i = 0; i < SIZE; i ++){
        arr[ i ] = arr[ i ] * arr[ i ];
    }
}

int main ( void ){
    int data[ SIZE ] = { 0 }, n = 0;
    scanf("%d", &n);
    for ( int i = 0; i < n; i ++ ){
        scanf("%d", &data[i]);
    }
    square( data );
    for ( int i = 0; i < n; i ++ ){
        printf("%d ", data[i]);
    }
    puts("");
}