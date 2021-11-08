#include <stdio.h>
#include <math.h>

int b2decimal( int n, int b );
int deciaml2k( int n, int k );
int b2decimal( int n, int b){
    int total = 0, i = 0;
    while (n > 0){
        total += n % 10 * pow(b, i);
        n /= 10;
        i++;
    }
    return total;
}

int deciaml2k( int n, int k ){
    if ( n < k){
        return n;
    }else{
        int n1 = n % k;
        return deciaml2k(n /= k, k ) * 10 + n1; 
    }
}

int main (void){
    int n, b, k;
    scanf("%d%d%d", &n, &b, &k);
    // printf("%010d\n", b2decimal(n, b));
    printf("%010d\n", deciaml2k( b2decimal(n, b), k) );
    
}