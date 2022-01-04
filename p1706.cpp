//1706
#include <cstdio>
#define N 20
bool vis[N];
int ans[N];
int n;
void dfs(int step){
	if(step==n+1){
		for(int i=1;i<=n;i++)printf("%5d",ans[i]);
		printf("\n");
		return ;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			ans[step]=i;
			dfs(step+1);
			vis[i]=0;
		}
	}
} 

int main(){
	scanf("%d",&n);
	dfs(1);
	return 0;
}
