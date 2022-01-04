//p1720
#include <cstdio>
long long fib[49];
int main(){
	long long n;scanf("%lld",&n);
	fib[0]=0;fib[1]=1;
	for(int k=2;k<=n;k++)fib[k]=fib[k-1]+fib[k-2];
	printf("%lld.00",fib[n]);
	return 0;
}
