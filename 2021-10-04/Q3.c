#include <stdio.h>

int main ( void ){
    int x;
    printf("是否有房產?(0: No, 1: Yes)\n");
    scanf("%d", &x);
    if (x == 0){
        printf("是否已婚?(0: No, 1: Yes)\n");
        scanf("%d", &x);
        if(x == 1){
            printf("%s\n", "可以貸款");
        }else{
            printf("是否年收入 > 100萬?(0: No, 1: Yes)\n");
            scanf("%d", &x);
            if(x == 0){
                printf("%s\n", "不能貸款");
            }else{
                printf("%s\n", "可以貸款");
            }
        }
    }else{
        printf("%s\n", "可以貸款");
    }
}