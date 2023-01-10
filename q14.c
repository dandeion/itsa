#include <stdio.h>
#include <string.h>

int main(){

    char a[100], aiv[100];
    int alen;
    scanf("%s", a);
    alen = strlen(a);

    for(int i=0; i<alen; i++)
        aiv[i] = a[alen-i-1];


    if(!strcmp(a,aiv))
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
