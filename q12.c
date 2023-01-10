#include <stdio.h>

int func(int num, int *data);


int main(){
    int data[1000] = {0};
    int num, ans;

    scanf("%d", &num);
    data[0] = 1;
    data[1] = 2;

    ans = func(num, data);

    printf("%d\n", ans);

    return 0;
}

int func(int num, int *data){
    if(data[num])
        return data[num];

    data[num] =  func(num-1, data) + func(num/2, data);
    return data[num];
}
