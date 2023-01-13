#include <stdio.h>

int main(){
    int money, change, apple, orange, peach;
    scanf("%d,%d,%d,%d", &money, &apple, &orange, &peach);

    change = money - 15 * apple - 20 * orange - 30 * peach;

    if(change < 0)
        printf("0\n");
    else{
        apple = change /50;
        change %= 50;
        orange = change / 5;
        change %= 5;
        printf("%d,%d,%d\n", change, orange, apple);


    }




    return 0;

}
















