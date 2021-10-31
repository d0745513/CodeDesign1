#include <stdio.h>
#define STR_SIZE 30

int main ( void ){
    char str[ STR_SIZE ];
    scanf("%[^\n]", str);
    int endIndex = 0;
    while ( 1 ){
        if( str[ endIndex ] == '\0' ){
            break;
        }
        endIndex++;
    }
    for( int i = endIndex -1; i >= 0; i-- ){
        printf("%c", str[ i ]);
    }
    printf("\n");
}