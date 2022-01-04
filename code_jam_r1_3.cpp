//round 1a q2
#include <bits/stdc++.h>
long long nck[70][70],n,tt;
int dx[]={-1,-1,0,0,1,1};
int dy[]={-1,0,-1,1,0,1};
bool vis[70][70],queried=0;
int ansx[700],ansy[700];
void dfs(long long sum,int depth,int x,int y){
	
	if(sum==n){
		for(int i=1;i<depth;i++)printf("%d %d\n",ansx[i],ansy[i]);
		queried=1;
		return;
	}
	if(sum>n||depth==500)return;
	for(int i=0;i<6;i++){
		int a=x+dx[i],b=y+dy[i];
		if(a>=1&&b>=1&&a<=60&&b<=a&&!vis[a][b]){
			vis[a][b]=1;
			ansx[depth]=a,ansy[depth]=b;
			dfs(sum+nck[a][b],depth+1,a,b);
			if(queried)return;
			vis[a][b]=0;
		}
	}
}
int main(){
	
	nck[1][1]=ansx[1]=ansy[1]=vis[1][1]=1;
	for(int i=2;i<=60;i++)
	for(int j=1;j<=i;j++){
		if(j==1||j==i)nck[i][j]=1;
		else nck[i][j]=nck[i-1][j-1]+nck[i-1][j];
	}
	scanf("%d",&tt);
	for(int ii=1;ii<=tt;ii++){
		scanf("%lld",&n);
		printf("Case #%d:\n",ii);
		queried=0;
		//memset(ansx,0,sizeof(ansx));
		//memset(ansy,0,sizeof(ansy));
		memset(vis,0,sizeof(vis));	
		nck[1][1]=ansx[1]=ansy[1]=vis[1][1]=1;
		dfs(1,2,1,1);
	}
	return 0;
}
