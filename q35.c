#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int testnum, budget, cost, giftnum, allgift;
    int price[110] = {0};
    scanf("%d", &testnum);
    while(testnum--){
        scanf("%d%d%d", &budget, &giftnum, &allgift);
        for(int i=0; i<allgift; i++)
            scanf("%d", &price[i]);

        for(int i=0; i<allgift-1; i++){                 // sorting, cost¥N´Àtmp
            for(int j=0; j<allgift-1-i; j++){
                if(price[j] > price[j+1]){
                    cost = price[j+1];
                    price[j+1] = price[j];
                    price[j] = cost;
                }
            }
        }

        cost = 0;
        for(int i=0; i<giftnum; i++)
            cost += price[i];

        if(cost > budget)
            printf("Impossible\n");
        else
            printf("%d\n", cost);

    }

    return 0;

}
















