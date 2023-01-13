#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int A, B;
    char ans[5], input[5];
    scanf("%s", ans);
    while(1){
        A = 0;
        B = 0;
        scanf("%s", input);
        if(!strcmp(input, "0000"))
            break;
        for(int i=0; i<4; i++){
            if(strchr(ans, input[i]))
                B++;
            if(ans[i] == input[i]){
                A++;
                B--;
            }
        }
        printf("%dA%dB\n", A, B);


    }

    return 0;

}
