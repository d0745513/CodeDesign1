#include <stdio.h>

int main ( void ){
    int n = 0;
    scanf("%d", &n);
    switch ( n ){
        case 1:
            printf("%s\n", "Monday");
            break;
        case 2:
            printf("%s\n", "Tuesday");
            break;
        case 3:
            printf("%s\n", "Wednesday");
            break;
        case 4:
            printf("%s\n", "Thursday");
            break;
        case 5:
            printf("%s\n", "Friday");
            break;
        case 6:
            printf("%s\n", "Saturday");
            break;
        case 7:
            printf("%s\n", "Sunday");
            break;
        default:
            printf("%s\n", "Error");
    }
}