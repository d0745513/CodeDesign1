#include <stdio.h>
#define SIZE 50

int main (void){
    int n = 0, i = 0;
    char data[SIZE], c;
    char data1[SIZE];
    scanf("%[^\n]", data);
    while( data[n] != '\0'){
        if( data[n] == ' '){
            n++;
            continue;
        }
        data1[i] = data[n];
        n++;
        i++;
    }
    // printf("%d\t\t%d\n ", i, n);
    for (int j = 0; j< i; j ++){
        for (int k = j+1; k < i; k++){
            if( data1[j] > data1[k]){
                char tmp = data1[j];
                data1[j] = data1[k];
                data1[k] = tmp;
            }
        }
        printf("%c", data1[j]);
    }
    puts("");
}