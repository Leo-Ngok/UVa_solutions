//p1434
#include <cstdio>
#include <algorithm>
using namespace std;
int a[110][110],n,m,dist[110][110],dir[4][2]={{-1,0},{0,-1},{0,1},{1,0}},maxd=0;
bool jdg(int x,int y){
	if(x<1||y<1||x>n||y>m)return false;
	return true;	
}
int dfs(int x,int y){
	if(dist[x][y]!=0)return dist[x][y];
	int maxn=0;
	for(int i=0;i<4;i++)
	if(jdg(x+dir[i][0],y+dir[i][1])&&a[x+dir[i][0]][y+dir[i][1]]<a[x][y])
	maxn=max(maxn,dfs(x+dir[i][0],y+dir[i][1]));
	return dist[x][y]=maxn+1;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	scanf("%d",&a[i][j]);	
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	maxd=max(maxd,dfs(i,j));
	printf("%d",maxd); 
	return 0;
}

