#include <stdio.h>
#include <math.h>

int main (void){
    int x, y;
    scanf("%d%d", &x, &y);
    if( sqrt(x*x+y*y) <= 100){
        printf("%s\n", "inside");
    }else{
        printf("%s\n", "outside");
    }
}