#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char sentence[110], c;
    int output[30] = {0};
    int len;
    gets(sentence);
    len = strlen(sentence);

    for(int i=0; i<len; i++){
        c = sentence[i];
        if(c == ' ')
            output[0]++;
        else{
            output[tolower(c) - 'a' + 1]++;
            //printf("%d\n", tolower(c) - 'a' + 1);
        }
    }

    printf("%d\n", output[0]+1);
    for(int i=1; i<27; i++){
        if(output[i])
            printf("%c : %d\n", 'a'-1+i, output[i]);
    }

    return 0;

}
