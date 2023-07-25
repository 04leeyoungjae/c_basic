#include <stdio.h>
int main(){
        long long int a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf",a+b,a-b,a*b,a/b,a%b,(float)a/b);
        return 0;
}
