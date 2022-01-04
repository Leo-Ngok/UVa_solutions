//p1605
#include <cstdio>
long long cnt=0;
int n,m,t,sx,sy,fx,fy,dx[30],dy[30];
bool vis[8][8];
void dfs(int x,int y){
	if(x<1||y<1||x>n||y>m)return;
	if(vis[x][y])return;
	for(int i=1;i<=t;i++)if(dx[i]==x&&dy[i]==y)return;
	if(x==fx&&y==fy){
		cnt++;return;
	}
	vis[x][y]=1;
	dfs(x-1,y);
	dfs(x,y-1);
	dfs(x,y+1);
	dfs(x+1,y);
	vis[x][y]=0;
}
int main(){
	scanf("%d%d%d%d%d%d%d",&n,&m,&t,&sx,&sy,&fx,&fy);
	for(int i=1;i<=t;i++)scanf("%d%d",dx+i,dy+i);
	dfs(sx,sy);
	printf("%lld",cnt);
	return 0;
}
