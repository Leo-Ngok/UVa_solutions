//p1100
#include <cstdio>
int main(){
	long long n;scanf("%lld",&n);
	long long n1=n>>16;
	long long n2=(n-(n1<<16))<<16;
	printf("%lld",n1+n2);
	return 0;
}
