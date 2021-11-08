#include <stdio.h>

int main (void){
    int n, p, q, total;
    scanf("%d", &n);
    for (int i = 0; i< n;i ++){
        scanf("%d", &p);
        scanf("%d", &q);
        total = 0;
        p = p % 2 == 0 ? p + 1: p;
        for ( int j = p ; j <=q; j+=2){
            total += j;
        }
        printf("%d\n", total);
    }
}