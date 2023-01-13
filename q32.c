#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char text[110];
    int len, shiftnum;
    fgets(text, 100, stdin);
    scanf("%d", &shiftnum);
    len = strlen(text);

    for(int i=0; i<len; i++){
        if(isalpha(text[i])){
            if(isupper(text[i]))
                text[i] = (text[i] - 'A' + shiftnum) % 26 + 'A';
            else
                text[i] = (text[i] - 'a' + shiftnum) % 26 + 'a';
        }

        if(isdigit(text[i]))
            text[i] = (text[i] - '0' + shiftnum) % 10 + '0';
    }

    printf("%s", text);

    return 0;

}
















