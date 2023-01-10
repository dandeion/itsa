#include <stdio.h>

int main(){
    int row, col, elenum;
    int arr[1000] = {0};
    scanf("%d%d", &row, &col);
    elenum = row * col;

    for(int i=0; i<elenum; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<col; i++){
        for(int j=0; j<row-1; j++)
            printf("%d ", arr[i+j*col]);
        printf("%d", arr[i+elenum-col]);
        printf("\n");

    }




    return 0;
}
