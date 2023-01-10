#include <stdio.h>

int main(){
    int num, neg = 0, counter = 0;
    int arr[8] = {0};

    scanf("%d", &num);

    if(num < 0){
        neg = 1;            // negative
        num = -num - 1;
    }


    while(num){
        arr[counter++] = num%2;
        num /= 2;

    }


    for(int i=0; i<8; i++){
        if(neg)
            printf("%d", !arr[7-i]);
        else
            printf("%d", arr[7-i]);
    }

    printf("\n");;


    return 0;
}
