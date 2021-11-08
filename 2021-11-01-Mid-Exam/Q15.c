#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int v1, int v2, int v3);

int max(int v1, int v2, int v3){
    v1 = v1 < v2 ? v2 : v1;
    v1 = v1 < v3 ? v3 : v1;
    return v1;
}

int main ( void ){
    int n, a, b, c, fCount = 0;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++){
        fCount = 0;
        scanf("%d%d%d", &a, &b, &c);
        fCount = a < 60 ? fCount+1 : fCount;
        fCount = b < 60 ? fCount+1 : fCount;
        fCount = c < 60 ? fCount+1 : fCount;
        if( a >= 60 && b>=60 && c >= 60 ){
            printf("%s", "P");
        }else if(fCount == 1){
            if((a + b + c) >= 220){
                printf("%s", "P");
            }else{
                printf("%s", "M");
            }
        }else if(fCount == 2 && max(a, b, c) >= 80){
            printf("%s", "M");
        }else{
            printf("%s", "F");
        }
        puts("");
    }
}