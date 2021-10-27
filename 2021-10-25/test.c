#include <stdio.h>
#include<math.h>
int main( void )
{
    int n;
    scanf("%d", &n);
    printf("%f",(n + ceil(n / 2) - 1));
}
