//p5534
#include <cstdio>
int main(){
	long long int a1,a2,n;
	scanf("%lld %lld %lld",&a1,&a2,&n);
	long long int d=a2-a1;
	printf("%lld",n*a1+n*(n-1)*d/2);
	return 0;
}
