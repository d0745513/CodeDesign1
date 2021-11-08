#include <stdio.h>
#include <math.h>

int main (void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ( a+b > c && b+c > a && a+c > b){
        printf("%s\n", "True");
    }else{
        printf("%s\n", "False");
    }
}