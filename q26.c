#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct data{
    int sum;
    char str[50];
    int num;
}data;

int calculate_sum(char *str);


int main(){
    int counter;
    data arr[10], tmp;
    scanf("%d", &counter);
    for(int i=0; i<counter; i++){
        scanf("%s", arr[i].str);
        arr[i].sum = calculate_sum(arr[i].str);
        arr[i].num = atoi(arr[i].str);
    }

    for(int i=0; i<counter-1; i++){
        for(int j=0; j<counter-1-i; j++){
            if(arr[j].num > arr[j+1].num){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i=0; i<counter-1; i++){
        for(int j=0; j<counter-1-i; j++){
            if(arr[j].sum > arr[j+1].sum){
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("%s", arr[0].str);
    for(int i=1; i<counter; i++)
        printf(" %s", arr[i].str);
    printf("\n");


    return 0;

}

int calculate_sum(char *str){
    int len = strlen(str), value = 0;
    for(int i=0; i<len; i++)
        value += str[i] - '0';

    return value;
}














