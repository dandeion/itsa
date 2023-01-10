#include <stdio.h>
#include <math.h>

int main(){
    int num, terms, ans;
    scanf("%d", &num);

    terms = num/3;
    ans = 3 * terms * (terms+1) / 2;
    printf("%d\n", ans);

    return 0;
}
