#include <stdio.h>

int main(void){
    int a;
    int total=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        if (i%2==1) continue;
        total+=i;
    }
    printf("%d",total);
    return 0;
}

