#include <stdio.h>
#define SIZE 30

int main (void){
    int n = 0;
    char data[SIZE], c, k;
    scanf(" %[^\n]", data);
    scanf(" %c", &c);
    scanf(" %c", &k);
    while( data[n] != '\0'){
        n++;
    }
    for (int i = 0; i< n; i ++){
        if (data[i] == c){
            data[i] = k;
        }
        printf("%c", data[i]);
    }
    puts("");
}