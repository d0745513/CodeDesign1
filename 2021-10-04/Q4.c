#include <stdio.h>

int main(void){
    int year;
    scanf("%d", &year);
    if(year % 400 == 0 ){
        printf("%s\n", "閏年");
    }
    else if( year % 100 == 0){
        printf("%s\n", "平年");
        printf("離%d最近的閏年是 %d 或 %d 年\n", year, year +4, year -4);
    }
    else if(year % 4 == 0){
        printf("%s\n", "閏年");
    }
    else {
        printf("%s\n", "平年");
        int x1 = year % 4, x2, x3;
        if (x1 > 2){
            if((year +(4 - x1)) % 100 != 0){
                printf("離%d最近的閏年是 %d 年\n", year, year +(4 - x1));
            }
            else{
                printf("離%d最近的閏年是 %d 年\n", year, year - x1);
            }
        }
        else if(x1 == 2){
            printf("離%d最近的閏年是", year);
            if((year + 2) % 100 != 0){
                printf(" %d 年", year + 2 );
            }
            if((year - 2) % 100 != 0){
                printf(" %d 年\n", year - 2);
            }
            puts("");
        }
        else{
            printf("離%d最近的閏年是 %d 年\n", year, year - x1);
        }
    }
}