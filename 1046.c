#include <stdio.h>
int main(){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        printf("%lld\n%.1f",(long long int)a+b+c,(float)(a+b+c)/3);
        return 0;
}
