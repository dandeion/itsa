#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int invoice, point, tmp;
    long long price = 0;
    int num[10] = {0};                                   // �o��������
    char table[4][10];                                  // �S�Y�����X
    char str[10];                                       // �o�����X
    for(int i=0; i<4; i++)
        scanf("%s", table[i]);
    scanf("%d", &invoice);
    for(int i=0; i<invoice; i++){
        scanf("%s", str);

        if(!strcmp(str, table[0]))                      // ��S��
            num[0]++;
        else{
            tmp = 10;                                   // �d�������B�j��, ��min(point)
            for(int j=1; j<4; j++){                         // ���Y��
                point = 0;
                while(point<6){
                    if(!strcmp(str+point, table[j]+point))
                        break;
                    point++;
                }
                if(point < tmp)
                    tmp = point;
            }
            num[tmp+1]++;
        }
    }

    /* ��X */
    price = 2000000*num[0] + 200000*num[1] + 40000*num[2] + 10000*num[3] + 4000*num[4] + 1000*num[5] + 200*num[6];
    printf("%d %d %d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6]);
    printf("%lld\n", price);



    return 0;

}
















