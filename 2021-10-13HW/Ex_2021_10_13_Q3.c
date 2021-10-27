#include <stdio.h>

int main( void ){
    unsigned int n = 0;
    scanf("%d", &n);
    for (unsigned int i = n; i > 0; i--){
        for (unsigned int j = 0; j < i-1; j ++){
            printf("%s", " ");
        }
        for (unsigned int j = 0; j < n-i+1; j ++){
            printf("%s", "*");
        }
        puts("");
    }
}