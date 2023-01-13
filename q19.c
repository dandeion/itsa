#include <stdio.h>

int main(){
    int num, start, end;
    int time[25] = {0};

    scanf("%d", &num);
    for(int i=0; i<num; i++){
        scanf("%d%d", &start, &end);
        for(start; start<end; start++)
            time[start]++;

    }

    int max = 0;
    for(int i=0; i<25; i++){
        if(time[i] > max)
            max = time[i];

    }
    printf("%d\n", max);

    return 0;

}
