#include <stdio.h>

int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ( a <= b && b <= c){
        if ( a+b == c ){
            printf("%s\n", "False");
            printf("False\n");
            printf("a + b = %d",a + b);
        }else{
            if ( a+b > c){
                printf("%s\n", "True");
            }
        }
    }else{
        printf("%s\n", "False");
    }
}