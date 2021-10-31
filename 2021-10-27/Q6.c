#include <stdio.h>
#define SIZE 30

void baboSort(int data[], char data2[SIZE][4], int n);
void baboSort(int data[], char data2[SIZE][4], int n){
    int tmp = 0;
    char tmpChar;
    for ( int i = 0; i < n; i++){
        for ( int j = i+1; j < n; j ++){
            if( data[i] < data[j]){
                tmp = data[ i ];
                data[ i ] = data[j];
                data[ j ] = tmp;
                for( int k = 0; k < 3; k ++){
                    tmpChar = data2[i][k];
                    data2[i][k ] = data2[j][k];
                    data2[j][k] = tmpChar;
                }
            }
        }
    }
}

int main ( void ){
    int n = 0, arr[SIZE] = { 0 }, tmp;
    scanf("%d", &n);
    char card[SIZE][4];
    for ( int i = 0; i < n; i ++){
        scanf("%s", card[i]);
        switch ( card[i][0] ){
            case 'c':
            case 'C':
                arr[i] = 0;
                break;
            case 'd':
            case 'D':
                arr[i] = 13;
                break;
            case 'h':
            case 'H':
                arr[i] = 26;
                break;
            case 's':
            case 'S':
                arr[i] = 39;
                break;
        }
        if ( card[i][2] == '\0'){
            arr[i] += (int) (card[i][1] - '0'); 
        }else{
            arr[i] += ((int) (card[i][1] - '0') * 10 + (int) (card[i][2] - '0')); 
        }
    }
    baboSort( arr , card, n);
    for( int i = 0; i < n; i ++){
        printf("%s ", card[i]);
    }
    puts("");
}