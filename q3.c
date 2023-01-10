#include <stdio.h>

int main(){
    int x, y, dist;

    scanf("%d%d", &x, &y);
    dist = x*x + y*y;

    if(dist > 10000)
        printf("outside\n");
    else
        printf("inside\n");


    return 0;
}
