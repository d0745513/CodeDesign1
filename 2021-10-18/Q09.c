#include <stdio.h>

int main ( void ){
    unsigned int n = 0, m = 0, vMax = 0, vMin = 0, tmp = 0;
    scanf("%d%d", &n, &m);
    vMax = n > m ? n : m;
    vMin = n < m ? n : m;
    while (vMax % vMin != 0){
        tmp = vMax % vMin;
        vMax = vMin;
        vMin = tmp;
    }
    printf("%d\n", vMin);
    printf("%d\n", (int) (n * m ) / vMin);
}