#include <stdio.h>

int main(){
    int rows, a, b, c, d;
    char opr;


    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        scanf(" %c%d%d%d%d", &opr, &a, &b, &c, &d);     // »Ý©¿²¤´«¦æ

        //printf("%c", opr);
        if(opr == '+')
            printf("%d %d\n", a+c, b+d);
        if(opr == '-')
            printf("%d %d\n", a-c, b-d);
        if(opr == '*')
            printf("%d %d\n", a*c - b*d, a*d + b*c);


    }




    return 0;
}
