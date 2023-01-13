#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int datanum, len1, len2, len;
    char num1[35], num2[35];
    char msb, tmp;

    scanf("%d", &datanum);

    for(int i=0; i<datanum; i++){
        char output[35] = {'\0'};
        msb = '0';
        scanf("%s%s", num1, num2);
        len1 = strlen(num1);
        len2 = strlen(num2);

        if(len1 <= len2){
            for(int j=0; j<len2; j++){
                if(j > len1 - 1)
                    tmp = num2[len2-1-j] - '0' + msb - '0' + '0';
                else
                    tmp = num1[len1-1-j] - '0' + num2[len2-1-j] - '0' + msb - '0' + '0';

                msb = '0';
                output[len2-j-1] = tmp;
                if(tmp > '9'){
                    msb = '1';
                    output[len2-j-1] -= 10;
                }
            }

            if(msb == '1')
                printf("%c", msb);
            printf("%s\n", output);
        }

        else{
            for(int j=0; j<len1; j++){
                if(j > len2 -1)
                    tmp = num1[len1-1-j] - '0' + msb - '0' + '0';
                else
                    tmp = num1[len1-1-j] - '0' + num2[len2-1-j] - '0' + msb - '0' + '0';
                msb = '0';
                output[len1-j-1] = tmp;
                if(tmp > '9'){
                    msb = '1';
                    output[len1-j-1] -= 10;
                }
            }

            if(msb == '1')
                printf("%c", msb);
            printf("%s\n", output);

        }

    }

    return 0;

}
