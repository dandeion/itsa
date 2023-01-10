#include <stdio.h>

void draw_h(int a[][25], int id, int cur);
void draw_v(int a[][25], int id, int cur);

int main(){
    int num;
    int arr[4][25] = {0};             // 4個數字

    for(int i=0; i<4; i++){             // 處理輸出
        scanf("%1d", &num);
        switch (num){
            case 0:
                draw_h(arr, i, 0);  draw_h(arr, i, 20);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                break;
            case 1:
                draw_v(arr, i, 4);
                break;
            case 2:
                draw_h(arr, i, 0);  draw_h(arr, i, 10);  draw_h(arr, i, 20);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                arr[i][5] = 0; arr[i][19] = 0;
                break;
            case 3:
                draw_h(arr, i, 0);  draw_h(arr, i, 10);  draw_h(arr, i, 20);
                draw_v(arr, i, 4);
                break;
            case 4:
                draw_h(arr, i, 10);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                arr[i][15] = 0; arr[i][20] = 0;
                break;
            case 5:
                draw_h(arr, i, 0);  draw_h(arr, i, 10);  draw_h(arr, i, 20);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                arr[i][9] = 0; arr[i][15] = 0;
                break;
            case 6:
                draw_h(arr, i, 10);  draw_h(arr, i, 20);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                arr[i][4] = 0; arr[i][9] = 0;
                break;
            case 7:
                draw_h(arr, i, 0);
                draw_v(arr, i, 4);
                break;
            case 8:
                draw_h(arr, i, 0);  draw_h(arr, i, 10);  draw_h(arr, i, 20);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                break;
            case 9:
                draw_h(arr, i, 0);  draw_h(arr, i, 10);
                draw_v(arr, i, 0);  draw_v(arr, i, 4);
                arr[i][15] = 0; arr[i][20] = 0;
                break;
        }
    }


    /* 輸出數字 */

    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<5; k++){
                if(arr[j][5*i+k])
                    printf("*");
                else
                    printf(" ");

            }
            if(j != 3)                      // 行尾不留白
                printf(" ");
        }
        printf("\n");
    }




    return 0;
}

void draw_h(int a[][25], int id, int cur){             // 畫一條水平線
    for(int i=0; i<5; i++)
        a[id][cur+i] = 1;
}

void draw_v(int a[][25], int id, int cur){              // 畫一條垂直線
    for(int i=0; i<5; i++)
        a[id][cur+5*i] = 1;
}
