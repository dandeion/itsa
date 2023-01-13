#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int year;
    scanf("%d", &year);

    if(!(year%400))
        printf("Bissextile Year\n");
    else if(!(year%100))
        printf("Common Year\n");
    else if(!(year%4))
        printf("Bissextile Year\n");
    else
        printf("Common Year\n");


    return 0;

}
















