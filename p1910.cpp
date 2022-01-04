//p1910
#include <cstdio>
#include <algorithm>
using namespace std;
long long n,m,x,dp[1010][1010],a,b,c;
int main(){
	scanf("%lld%lld%lld",&n,&m,&x);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld%lld",&a,&b,&c);
		for(int j=m;j>=b;j--)
		for(int k=x;k>=c;k--)
		dp[j][k]=max(dp[j][k],dp[j-b][k-c]+a);
	}
	printf("%lld",dp[m][x]);
	return 0;
}
