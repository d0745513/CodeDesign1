#include <stdio.h>

int main ( void ){
     unsigned int n = 0;
     scanf("%d", &n);
     int m = (int) n / 2 + 1;
     short flag = 1;
     unsigned int i = 2;
     while ( i <= m && flag ) { 
         if ( n % i == 0 ){
             flag = 0;
         }
         i ++;
     }
     if (n == 1) {
         printf("%s\n", "NO");
     }
     else if ( flag || n == 2){
         printf("%s\n", "YES");
     }else{
         printf("%s\n", "NO");
     }
}