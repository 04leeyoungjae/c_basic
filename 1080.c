#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    int i=0;
    while (1){
        i++;
        a-=i;
        if (a<=0) break;
    }
    printf("%d",i);
    return 0;
}

