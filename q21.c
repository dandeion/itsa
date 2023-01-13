#include <stdio.h>

int main(){
    float max, min;
    float nums[10];

    for(int i=0; i<10; i++)
        scanf("%f", &nums[i]);

    max = nums[0];
    min = nums[0];
    for(int i=1; i<10; i++){
        if(nums[i] > max)
            max = nums[i];
        if(nums[i] < min)
            min = nums[i];


    }

    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);

    return 0;

}
















