#include <stdio.h>
#include <math.h>
#define SIZE 50

void crypt(char data[], int key );

void crypt(char data[], int key ){ 
    int i = 0;
    while( data[i] != '\0'){
        if ( (data[i] - 'a') >= 0 && (data[i] - 'a') < 26 ){
            data[i] = (char) ( (int) 'a' + ((((int) data[i] + key) - (int) 'a') % 26));
        }else if ( (data[i] - 'A') >= 0 && (data[i] - 'A') < 26 ){
            data[i] = (char) ( (int) 'A' + ((((int) data[i] + key) - (int) 'A') % 26));
        }else if ( (data[i] - '0') >= 0 && (data[i] - '0') < 10 ){
            data[i] = (char) ( (int) '0' + ((((int) data[i] + key) - (int) '0') % 10));
        }
        i++;
    }
}

int main (void){
    char str[SIZE];
    int key = 0, i = 0;
    scanf("%[^\n]", str);
    scanf(" %d", &key);
    crypt(str, key);
    while( str[i] != '\0' ){
        printf("%c", str[i]);
        i++;
    }
    puts("");
}