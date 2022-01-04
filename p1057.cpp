//p1057
#include <cstdio>
int n,m,cnt=0,dp[40][40]={0};
//dp[m][n]
int func(int n1){
	if(n1%n==0)return n;
	return n1%n;
}
int dfs(int tl,int curr){
	int cnt=0;
	if(tl==0){
		if(curr==1)return 1;
		return 0;
	}	
	cnt+=dfs(tl-1,func(curr-1));
	cnt+=dfs(tl-1,func(curr+1));
	return cnt;	
}

int main(){
	scanf("%d%d",&n,&m);
	dp[0][1]=1;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	dp[i][j]=dp[i-1][func(j-1)]+dp[i-1][func(j+1)];
	
	printf("%d",dp[m][1]);
	//printf("%d",dfs(m,1));
	return 0;
}
