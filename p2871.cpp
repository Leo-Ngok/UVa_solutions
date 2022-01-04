//p2871
#include <cstdio>
#include <algorithm>
using namespace std;
long long n,m,dp[50010],x,y;
int main(){
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&x,&y);
		for(int j=m;j>=x;j--)
		dp[j]=max(dp[j],dp[j-x]+y);
	}
	printf("%lld",dp[m]);
	return 0;
}
