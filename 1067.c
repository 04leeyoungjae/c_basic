#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    if(a>0) printf("plus\n"); else printf("minus\n");
    if(a%2) printf("odd\n"); else printf("even\n");
    return 0;
}

