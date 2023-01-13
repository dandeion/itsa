#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char text[1000];
    char *token;
    int counter, tmp, times, timesmax;
    int seq[1000] = {0};
    while(fgets(text, 1000, stdin)){        // 一筆測試資料
        counter = 0;
        times = 1;
        timesmax = -1;
        token = strtok(text, " \n");
        while(token){
            seq[counter++] = atoi(token);
            token = strtok(NULL, " \n");
        }
        for(int i=0; i<counter-1; i++){
            for(int j=0; j<counter-1-i; j++){
                if(seq[j] > seq[j+1]){
                    tmp = seq[j+1];
                    seq[j+1] = seq[j];
                    seq[j] = tmp;
                }
            }
        }


        seq[counter] = seq[counter-1] + 1;  // stop
        for(int i=0; i<counter; i++){
            if(seq[i] == seq[i+1]){
                times++;
                continue;
            }

            else{
                if(times > timesmax){
                    timesmax = times;
                    tmp = seq[i];
                }
                times = 1;              // initialize
            }
        }
        //printf("%d\n",timesmax);
        if(timesmax > (counter/2))
            printf("%d\n", tmp);
        else
            printf("NO\n");

    }



    return 0;

}
















