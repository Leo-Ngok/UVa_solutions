//p1101
#include <cstdio>
char yz[]="yizhong";
char mat[110][110];
bool show[110][110];
int n;
bool dfs(int i,int j,int cnt)
{
	if(mat[i][j]!=yz[cnt])return false;
	if(cnt==5)
	{
		if(mat[i][j]=='g')return true;
		return false;
	}
	if(i>0&&j>0&&!show[i-1][j-1])show[i-1][j-1]=dfs(i-1,j-1,cnt+1);
	if(i>0&&!show[i-1][j])show[i-1][j]=dfs(i-1,j-1,cnt+1);
	if(i>0&&j<n-1&&!show[i-1][j+1])show[i-1][j+1]=dfs(i-1,j+1,cnt+1);
	if(j>0&&!show[i][j-1])show[i][j-1]=dfs(i,j-1,cnt+1);
	if(j<n-1&&!show[i][j+1])show[i][j+1]=dfs(i,j+1,cnt+1);
	if(i<n-1&&j>0&&!show[i+1][j-1])show[i+1][j-1]=dfs(i+1,j-1,cnt+1);
	if(i<n-1&&!show[i+1][j])show[i+1][j]=dfs(i+1,j,cnt+1);
	if(i<n-1&&j<n-1&&!show[i+1][j+1])show[i+1][j+1]=dfs(i+1,j+1,cnt+1);
}
int main(){
	scanf("%d",&n);
	mat;
	for(int i=0;i<n;i++)
	scanf("%s",mat[i]);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(!show[i][j])show[i][j]=dfs(i,j,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)printf("%c",show[i][j]?mat[i][j]:'*');
		printf("\n");
	}
	return 0;
}
