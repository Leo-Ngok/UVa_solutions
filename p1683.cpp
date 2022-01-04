//p1683
#include <cstdio>
int dx[]={-1,0,0,1},dy[]={0,-1,1,0},n,m,a,b;long long cnt;
char map[22][22];
bool vis[22][22];
inline void dfs(int x,int y){
	if(x<0||y<0||x>=m||y>=n)return;
	if(map[x][y]=='#')return;
	map[x][y]='#';
	cnt++;
	for(int i=0;i<4;i++)dfs(x+dx[i],y+dy[i]);
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%s",map[i]);
		for(int j=0;j<n;j++)
		if(map[i][j]=='@')a=i,b=j;
	}
	dfs(a,b);
	printf("%lld",cnt);
	return 0;
}
