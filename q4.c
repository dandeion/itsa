#include <stdio.h>

int main(){
    int h1, h2, m1, m2, hd, md;             // hd = hour difference, md = minute difference
    int ptime;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

    if(h2 < h1){
        hd = 24 - h1 + h2;
        if(m2 < m1){
            md = 60 - m1 + m2;
            hd--;
        }
        else
            md = m2 - m1;
    }
    else{
        hd = h2 - h1;
        if(m2 < m1){
            md = 60 - m1 + m2;
            hd--;
        }
        else
            md = m2 - m1;

    }

    ptime = (60*hd+md)/30;


    /* ¿é¥X */
    if(ptime <= 4)
        printf("%d\n", 30*ptime);
    else if(ptime <= 8)
        printf("%d\n", 30*4 + 40*(ptime-4));
    else
        printf("%d\n", 30*4 + 40*4 + 60*(ptime-8));


    return 0;
}
