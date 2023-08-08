#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d",&a);
    a--;
reget:
    scanf("%d",&b);
    printf("%d\n",b);
    if (a--) goto reget;
    return 0;
}

