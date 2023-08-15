#include <stdio.h>

int main(void){
    int w,h,b;
    scanf("%d %d %d",&w,&h,&b);
    printf("%.2f MB",(float)w*h*b/8/1024/1024);
    return 0;
}
