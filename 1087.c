#include <stdio.h>

int main(void){
    int a;
    int total=0;
    scanf("%d",&a);
    for(int i=0;total<a;i++){
        total+=i;
    }
    printf("%d",total);
    return 0;
}

