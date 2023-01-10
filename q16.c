#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char stringg[520], substringg[130];
    char *tmp;
    int counter = 0;
    scanf("%s%s", substringg, stringg);

    tmp = strstr(stringg, substringg);
    //printf("%d\n", tmp - stringg);


    while(tmp != NULL){
        //puts(tmp);
        counter ++;
        tmp++;
        tmp = strstr(tmp, substringg);
    }

    printf("%d\n", counter);




    return 0;

}
