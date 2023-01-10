#include <stdio.h>

int main(){
    int num, printt = 0;

    scanf("%d", &num);

    for(int i=2; i<num; i++){
        if(!(num%i)){
            printf("NO\n");
            printt = 1;
            break;
        }
    }

    if(!printt)
        printf("YES\n");


    return 0;
}
