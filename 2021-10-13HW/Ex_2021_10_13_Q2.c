#include <stdio.h>

int main( void ){
    unsigned int n = 0;
    scanf("%d", &n);
    for (unsigned int i = n; i > 0; i--){
        for (unsigned int j = 0; j < i; j ++){
            printf("%s", "*");
        }
        puts("");
    }
}