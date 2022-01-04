//p1802
#include <cstdio>
#include <algorithm>
using namespace std;
long long n,x,lose[1010],win[1010],use[1010],dp[1010];
int main(){
	scanf("%lld%lld",&n,&x);
	for(int i=1;i<=n;i++)scanf("%lld%lld%lld",lose+i,win+i,use+i);
	for(int i=1;i<=n;i++){
		for(int j=x;j>=use[i];j--)
		dp[j]=max(dp[j]+lose[i],dp[j-use[i]]+win[i]);
		for(int j=use[i]-1;j>=0;j--)
		dp[j]+=lose[i];
	}
	printf("%lld",dp[x]*5);
	return 0;
}
/*
int dfs(int i,int val,int vol){
	if(i>n)return val;
	if(vol+use[i]>x)return dfs(i+1,val+lose[i],vol);
	return max(dfs(i+1,val+win[i],vol+use[i]),dfs(i+1,val+lose[i],vol));
}
*/
