//p2925
#include <cstdio>
#include <algorithm>
using namespace std;
long long n,m,dp[50010],x ;
int main(){
	scanf("%lld%lld",&m,&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&x);
		for(int j=m;j>=x;j--)
		dp[j]=max(dp[j],dp[j-x]+x);
		if(dp[m]==m){printf("%d",m);return 0;}
	}
	printf("%lld",dp[m]);
	return 0;
}
