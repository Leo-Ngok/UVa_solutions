//p2392
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int dp[1300],w[40],s1,s2,s3,s4,ans=0,h,tmp=0;
int find(int s){
	memset(dp,0,sizeof(dp));
	memset(w,0,sizeof(w));tmp=0;
	for(int i=1;i<=s;i++)scanf("%d",w+i),tmp+=w[i];
	h=tmp>>1;
	for(int i=1;i<=s;i++)
	for(int j=h;j>=w[i];j--)
	dp[j]=max(dp[j],dp[j-w[i]]+w[i]);	
	return tmp-dp[h];
}
int main(){
	scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
	ans+=find(s1);
	ans+=find(s2);
	ans+=find(s3);
	ans+=find(s4);
	printf("%d",ans);
	return 0;
}
