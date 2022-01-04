//p1855
#include <cstdio>
int taskc[110],taskt[110],n,M,T,dp[110][220][220];
int maxn(int x,int y){
	return (x>y)?x:y;
}
int main(){
	scanf("%d%d%d",&n,&M,&T);
	for(int i=1;i<=n;i++)scanf("%d%d",taskc+i,taskt+i);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=M;j++)
	for(int k=1;k<=T;k++){
		if(j<taskc[i]||k<taskt[i])dp[i][j][k]=dp[i-1][j][k];
		else dp[i][j][k]=maxn(dp[i-1][j][k],dp[i-1][j-taskc[i]][k-taskt[i]]+1);
	}
	printf("%d",dp[n][M][T]);
	return 0;
}
