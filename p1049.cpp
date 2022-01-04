//p1049
#include <cstdio>
int items[40],n,ans=20010,v;
int dpt[40][20010]={0};
int minn(int x,int y){
	return (x<y)?x:y;
}
int dfs(int i,int lw){
	if(i==0)return lw;
	if(lw-items[i]>=0)return minn(dfs(i-1,lw-items[i]),dfs(i-1,lw));
	return dfs(i-1,lw);
}
int main(){
	scanf("%d%d",&v,&n);
	for(int i=1;i<=v;i++)dpt[0][i]=i;
	for(int i=1;i<=n;i++)scanf("%d",items+i);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=v;j++)
	dpt[i][j]=(j>=items[i])?minn(dpt[i-1][j-items[i]],dpt[i-1][j]):dpt[i-1][j];
	printf("%d",dpt[n][v]);
	return 0;
}
