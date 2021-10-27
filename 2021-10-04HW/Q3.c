#include <stdio.h>
#include <stdlib.h>

int main (void){
    int v1, i = 0, j;
    
    scanf("%d", &v1);
    while ( i < v1){
        j = 0;
        while(j < v1){
            printf("%s", "#");
            j++;
        }
        puts("");
        i++;
    }
}