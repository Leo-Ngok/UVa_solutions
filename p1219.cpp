//p1219
#include <cstdio>
int ans[20],sum,n;
bool vis[3][30];
void dfs(int col){
	if(col>n){
		//sum++;
		//if(sum<=3){
			for(int i=1;i<=n;i++)printf("%d ",ans[i]);
			printf("\n");
		//}
		return;
	}
	for(int i=1;i<=n;i++){
		if((!vis[0][i])&&(!vis[1][col+i])&&(!vis[2][n-i+col])){
			ans[col]=i;
			vis[0][i]=vis[1][col+i]=vis[2][n-i+col]=1;
			dfs(col+1);
			vis[0][i]=vis[1][col+i]=vis[2][n-i+col]=0;
		}
	}
}
int main(){
	scanf("%d",&n);
	dfs(1);
	printf("%d",sum);
	return 0;
}

