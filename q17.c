#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 1010

char* tolowers(char *str);



int main(){
    char sentence[LENGTH][20];
    char inp[LENGTH], ans[LENGTH];
    char *token;
    int counter = 0;
    int printornot[LENGTH] = {0};

    fgets(inp, LENGTH+10, stdin);
    inp[strlen(inp)-1] = '\0';
    token = strtok(inp, " ");

    while(token != NULL){
        strcpy(sentence[counter++], token);

        token = strtok(NULL, " \r\n");
    }

    for(int i=0; i<counter; i++)
        tolowers(sentence[i]);



    for(int i=0; i<counter-1; i++){
        for(int j=i+1; j<counter; j++){
            if(!strcmp(sentence[i], sentence[j]))
                printornot[j] = 1;

        }
    }

    /* output */
    printf("%s", sentence[0]);

    for(int i=1; i<counter; i++){
        if(!printornot[i])
            printf(" %s", sentence[i]);
    }
    printf("\n");


    return 0;

}

char* tolowers(char *str){
    int len = strlen(str);

    for(int i=0; i<len; i++)
        str[i] = tolower(str[i]);

    return str;
}


















