#include <stdio.h>

int main( void ){
    unsigned int n = 0;
    scanf("%d", &n);
    char str[] = "00000000";
    unsigned i = 7;
    while (n > 0){
        str[i] = (char) ((int) '0' + (n % 2));
        n = (int) n / 2;
        i--;
    }
    printf("%s\n", str);
}