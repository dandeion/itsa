#include <stdio.h>
#include <string.h>

#define LENGTH 1000

typedef struct card{
    char face[5];
    char suit;
    int num;
    int weight;
}card;



int main(){
    int pile, cardnum;
    char inp[5*LENGTH];
    char *token;
    card arr[LENGTH], tmp;

    scanf("%d ", &pile);

    for(int i=0; i<pile; i++){
        cardnum = 0;
        fgets(inp, 5*LENGTH-1, stdin);
        //printf("%d\n", strlen(inp));
        inp[strlen(inp)-1] = '\0';
        token = strtok(inp, " ");
        while(token != NULL){
            strcpy(arr[cardnum++].face, token);
            //printf("%s %d\n", arr[cardnum-1].face, strlen(arr[cardnum-1].face));
            token = strtok(NULL, " ");
        }

        for(int j=0; j<cardnum; j++){
            sscanf(arr[j].face, "%c%d", &arr[j].suit, &arr[j].num);
            //printf("%c %d\N", arr[j].suit, arr[j].num);

            arr[j].weight = arr[j].num;
            if(arr[j].suit == 'S')   arr[j].weight += 10000;
            if(arr[j].suit == 'H')   arr[j].weight += 5000;
            if(arr[j].suit == 'D')   arr[j].weight += 2000;
            if(arr[j].suit == 'C')   arr[j].weight += 1000;

        }

        for(int j=0; j<cardnum-1; j++){
            for(int k=0; k<cardnum-j-1; k++){
                if(arr[k].weight < arr[k+1].weight){
                    tmp = arr[k+1];
                    arr[k+1] = arr[k];
                    arr[k] = tmp;
                }
            }
        }

        for(int j=0; j<cardnum-1; j++)
            printf("%c%d ", arr[j].suit, arr[j].num);

        printf("%c%d\n", arr[cardnum-1].suit, arr[cardnum-1].num);


    }


    return 0;
}
