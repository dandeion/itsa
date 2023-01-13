#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int height, gender;
    float stdweight;
    while(scanf("%d%d", &height, &gender) != EOF){
        if(gender == 1)
            stdweight = (height - 80)*0.7;
        else if(gender == 2)
            stdweight = (height - 70)*0.6;

        printf("%.1f\n", stdweight);

    }


    return 0;

}
















