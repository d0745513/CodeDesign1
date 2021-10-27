#include <stdio.h>

int main( void ){
    unsigned int n = 0;
    scanf("%d", &n);
    for (unsigned int i = 0; i < n; i++){
        for (unsigned int j = 1; j < n-i; j ++){
            printf("%s", " ");
        }
        for (unsigned int j = 0; j < 2*i+1; j ++){
            printf("%s", "*");
        }
        puts("");
    }
}