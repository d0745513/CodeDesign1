#include <stdio.h>

int main(void){
    int n, x, y, loops = 0;
    scanf("%d", &n);
    x = n/2;
    y = 2;
    while(y <= x){
        loops++;
        if(n%y == 0){
            y = x + 1;
            printf("%s", "NO, ");
        }
        if(y == x){
            loops++;
            printf("%s", "YES, ");
        }
        y++;
    }
    if(n < 2){
        printf("%s", "NO, ");
    }
    if(n == 3){
        printf("YES, 1\n");
        return 0;
    }
    printf("%d\n", loops);
    return 0;
}