//p1634
#include <cstdio>
int main(){
	long long k,n,t=1,x;scanf("%lld%lld",&x,&n);
	for(k=1;k<=n;k++)t+=t*x;
	printf("%lld",t);return 0;
} 
