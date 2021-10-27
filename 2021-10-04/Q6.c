#include<stdio.h>
#include<stdlib.h>
int main(){
    int month,day;
    scanf("%d %d",&month,&day);
    if(month == 1){
        if(day >= 21) printf("Aquarius\n");
        else printf("Capricorn\n");
    }
    else if(month == 2){
        if(day >= 19) printf("Pisces\n");
        else printf("Aquarius\n");
    }
    else if(month == 3){
        if(day >= 21) printf("Aries\n");
        else printf("Pisces\n");
    }
    else if(month == 4){
        if(day >= 21) printf("Taurus\n");
        else printf("Aries\n");
    }
    else if(month == 5){
        if(day >= 22) printf("Gemini\n");
        else printf("Taurus\n");
    }
    else if(month == 6){
        if(day >= 22) printf("Cancer\n");
        else printf("Gemini\n");
    }
    else if(month == 7){
        if(day >= 23) printf("Leo\n");
        else printf("Cancer\n");
    }
    else if(month ==  8){
        if(day >= 24) printf("Virgo\n");
        else printf("Leo\n");
    }
    else if(month == 9){
        if(day >= 24) printf("Libra\n");
        else printf("Virgo\n");
    }
    else if(month == 10){
        if(day >= 24) printf("Scorpio\n");
        else printf("Libra\n");
    }
    else if(month == 11){
        if(day >= 23) printf("Sagittarius\n");
        else printf("Scorpio\n");
    }
    else if(month == 12){
        if(day >= 22) printf("Capricorn\n");
        else printf("Sagittarius\n");
    }       
}