#include <stdio.h>
#include <math.h>

int main(){
    long double r, p;
    int n;
    long double term = 1.0, salary;
    scanf("%llf%d%llf", &r, &n, &p);
    while((n--)>0){
        term *= (1+r);
    }
    if(r==0)
        salary = p;
    else
        salary = p*(1.0+r)*(term-1.0)/r;

    printf("%lld\n", (long long)salary);


    return 0;

}
