#include <stdio.h>

int main (void){
    int w = 0, h = 0;
    scanf("%d%d", &w, &h);
    for (int i = 0; i <= h; i ++){
        for (int j = 0; j <= w; j++){
            printf("%5d\t", i+j);
        }
        puts("");
    }
}