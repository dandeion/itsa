#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int month, date, day;
    scanf("%d%d", &month, &date);
    day = 30*month + 1*date;

    if(day <= 50)
        printf("Capricorn\n");      // 1
    else if(day <= 78)
        printf("Aquarius\n");      // 2
    else if(day <= 110)
        printf("Pisces\n");         // 3
    else if(day <= 140)
        printf("Aries\n");       // 4
    else if(day <= 171)
        printf("Taurus\n");       // 5
    else if(day <= 201)
        printf("Gemini\n");        // 6
    else if(day <= 232)
        printf("Cancer\n");       // 7
    else if(day <= 263)
        printf("Leo\n");       // 8
    else if(day <= 293)
        printf("Virgo\n");       // 9
    else if(day <= 323)
        printf("Libra\n");       // 10
    else if(day <= 352)
        printf("Scorpio\n");       // 11
    else if(day <= 381)
        printf("Sagittarius\n");       // 12
    else
        printf("Capricorn\n");       // 1



    return 0;

}
















