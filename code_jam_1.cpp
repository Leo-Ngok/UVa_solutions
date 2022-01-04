//code jam qround question 1
#include <cstdio>
#include <cstring>
int mat[110][110];
bool vis[110];
int t,n,rr,cr,tr;
int main(){
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		scanf("%d",&n);
		memset(mat,0,sizeof(mat));
		memset(vis,0,sizeof(vis));
		rr=cr=tr=0;
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		scanf("%d",&mat[i][j]);
		//find the trace
		for(int i=1;i<=n;i++)tr+=mat[i][i];
		//find row repeat
		for(int i=1;i<=n;i++){
			memset(vis,0,sizeof(vis));
			for(int j=1;j<=n;j++){
				if(vis[mat[i][j]]){
					rr++;break;
				}
				vis[mat[i][j]]=1;
			}
		}
		//find column repeat
		for(int j=1;j<=n;j++){
			memset(vis,0,sizeof(vis));
			for(int i=1;i<=n;i++){
				if(vis[mat[i][j]]){
					cr++;break;
				}
				vis[mat[i][j]]=1;
			}
		}
		printf("Case #%d: %d %d %d\n",k,tr,rr,cr);
	}
	return 0;
}
