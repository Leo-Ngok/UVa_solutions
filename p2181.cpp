#include <cstdio>
unsigned long long ans,n;
int main(){
	scanf("%lld",&n);
	ans=n*(n-1)/2*(n-2)/3*(n-3)/4;
	printf("%lld",ans);
	return 0;
}
