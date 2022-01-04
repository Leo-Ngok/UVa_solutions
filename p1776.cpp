//p1776
#include <cstdio>
#include <algorithm>
using namespace std;
long long dp[40010];
long long w[110],m[110],v[110];
int n,W;
int main(){
	scanf("%d%d",&n,&W);
	for(int i=1;i<=n;i++)scanf("%lld%lld%lld",v+i,w+i,m+i);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m[i];j++)
	for(int k=W;k>=w[i];k--)
	dp[k]=max(dp[k],dp[k-w[i]]+v[i]);
	printf("%lld",dp[W]);
	return 0;
}
