//p1876
#include <cstdio>
#include <math.h>
int main(){
	long long n;scanf("%lld",&n);
	for(long long k=1;k<=sqrt(n);k++)printf("%lld ",k*k);
	return 0;
}
