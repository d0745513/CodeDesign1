#include <stdio.h>
#define SIZE 30

void baboSort(int data[], int n, char op);
void baboSort(int data[], int n, char op){
    int tmp = 0;
    if( op == 'a' || op == 'A'){
        for ( int i = 0; i < n; i++){
            for ( int j = i+1; j < n; j ++){
                if( data[i] > data[j]){
                    tmp = data[ i ];
                    data[ i ] = data[j];
                    data[ j ] = tmp;
                }
            }
        }
    }else{
        for ( int i = 0; i < n; i++){
            for ( int j = i+1; j < n; j ++){
                if( data[i] < data[j]){
                    tmp = data[ i ];
                    data[ i ] = data[j];
                    data[ j ] = tmp;
                }
            }
        }
    }
}

int main ( void ){
    int n = 0, arr[SIZE] = { 0 }, tmp;
    char op;
    scanf("%d", &n);
    scanf("%d", &tmp);
    scanf("%c", &op);
    for ( int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    baboSort( arr , n, op);
    for( int i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
    puts("");
}