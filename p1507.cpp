//p1507
#include <cstdio>
int V,M,n,ks[60][410][410];
int maxn(int x,int y){
	return (x>y)?x:y;
}
struct food{
	int mass,volume,cal;
}fd[70];
int main(){
	scanf("%d%d%d",&V,&M,&n);
	for(int i=1;i<=n;i++)scanf("%d%d%d",&fd[i].volume,&fd[i].mass,&fd[i].cal);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=M;j++)
	for(int k=1;k<=V;k++){
	if(fd[i].mass>j||fd[i].volume>k)ks[i][j][k]=ks[i-1][j][k];
	else ks[i][j][k]=maxn(ks[i-1][j][k],ks[i-1][j-fd[i].mass][k-fd[i].volume]+fd[i].cal);
	}
	printf("%d",ks[n][M][V]);
	return 0;
}
/*
int dfs(int i,int m,int v){
	if(i==0||m==0||v==0)return 0;
	if(fd[i].mass>m||fd[i].volume>v)return dfs(i-1,m,v);
	return maxn(dfs(i-1,m,v),dfs(i-1,m-fd[i].mass,v-fd[i].volume)+fd[i].cal);
}
*/
