#include <stdio.h>

int main ( void ){
    int v;
    scanf("%d", &v);
    int v1 = (v / 1000 + 7) % 10 ;
    int v2 = ((v / 100) % 10 + 7) % 10;
    int v3 = ((v / 10) % 10 + 7) % 10;
    int v4 = (v % 10 + 7) % 10;
    printf("%d%d%d%d\n", v3, v4, v1, v2);
}
