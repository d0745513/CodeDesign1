#include <stdio.h>

int main ( void ){
    unsigned long long int n = 0, m = 0;
    scanf("%lld%lld", &n, &m );
    printf("%lld+%lld=%lld\n", n, m, n + m );
    printf("%lld-%lld=%lld\n", n, m,  n - m );
    printf("%lld*%lld=%lld\n", n, m,  n * m );
    printf("%lld/%lld=%lld(%lld)\n", n, m,  n / m, (unsigned long long int)n % m );
}