//p1913
#include <cstdio>
int n,m,ans;
char chr[1010][1010];
bool vis[1000][1000];
bool check(int i,int j){	
	if(i<0||j<0||i>=n||j>=m||vis[i][j]==1)return false;
	return true;
}
void dfs(int i,int j){
	ans++;
	vis[i][j]=1;
	if(check(i,j-1)&&chr[i][j-1]=='r')dfs(i,j-1);
	if(check(i,j+1)&&chr[i][j+1]=='l')dfs(i,j+1);
	if(check(i-1,j)&&chr[i-1][j]=='d')dfs(i-1,j);
	if(check(i+1,j)&&chr[i+1][j]=='u')dfs(i+1,j);
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%s",chr[i]);
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	if(chr[i][j]=='o')dfs(i,j);
	printf("%d",ans);
	return 0;
}
