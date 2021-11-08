#include <stdio.h>

int main (void){
    float n, maxVal, minVal, total;
    int count;
    scanf("%f", &n );
    maxVal = n;
    minVal = n;
    while ( n != (int) -999 ){
        total += n;
        maxVal = maxVal < n ? n : maxVal;
        minVal = minVal > n ? n : minVal;
        scanf("%f", &n );
        count ++;
    }
    if( count == 0){
        printf("%s", "No data!");
    }else{
        printf("%012.3f\n%012.3f\n%012.3f\n%012.3f", maxVal, minVal, total, total/count);
    }
    puts("");
}