#include <stdio.h>

int main(){
    int ooxx[9] = {0};
    int win = 0;

    for(int i=0; i<9; i++)
        scanf("%d", &ooxx[i]);

    for(int i=0; i<3; i++){
        if(ooxx[i] == ooxx[i+3] && ooxx[i+3] == ooxx[i+6])
            win = 1;
        if(ooxx[3*i] == ooxx[3*i+1] && ooxx[3*i+1] == ooxx[3*i+2])
            win = 1;

    }
    if(ooxx[0] == ooxx[4] && ooxx[4] == ooxx[8])
        win = 1;
    if(ooxx[2] == ooxx[4] && ooxx[4] == ooxx[6])
        win = 1;

    if(win)
        printf("True\n");
    else
        printf("False\n");



    return 0;

}
















