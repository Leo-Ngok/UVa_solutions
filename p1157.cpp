//p1157
#define N 25
#include <cstdio>
int ans[N];
int vis[N];
int n,r;
void dfs(int k){
	if(k>r){
		for(int i=1;i<=r;i++)printf("%3d",ans[i]);
		printf("\n");
		return;
	}
	for(int i=ans[k-1]+1;i<=n;i++){
		ans[k]=i;
		dfs(k+1);
	}
}
int main(){
	scanf("%d%d",&n,&r);
	dfs(1);
	return 0;
}
