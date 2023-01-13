#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int counter, sum;
    float average;
    char text[1000];
    char *token;
    while(fgets(text, 1000, stdin)){
        counter = 0;
        sum = 0;
        token = strtok(text, " \n");

        while(token){
            counter++;
            sum += atoi(token);
            token = strtok(NULL, " \n");
        }

        average = sum*1.0 / counter;
        printf("Size: %d\n", counter);
        printf("Average: %.3f\n", average);


    }

    return 0;

}
















