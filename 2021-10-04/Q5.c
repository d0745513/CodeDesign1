#include <stdio.h>

int main(void){
    int x;
    printf("年齡:\n");
    scanf("%d", &x);
    if(x <= 30){
        printf("長相 (0: 醜, 1: 帥, 2: 中等):\n");
        scanf("%d", &x);
        if(x == 0){
            printf("不見");
        }else{
            printf("收入 (0: 低, 1: 中, 2: 高):\n");
            scanf("%d", &x);
            if(x == 0){
                printf("不見");
            }else if (x == 1){
                printf("是否為公務員 (0: 否, 1: 是):\n");
                scanf("%d", &x);
                if (x == 0){
                    printf("不見");
                }else{
                    printf("見");
                }
            }else{
                printf("見");
            }
        }
    }else{
        printf("不見");
    }
}