//p1002
#include <cstdio>
int n,m,cnt=0,x,y;long long board[30][30];
int ptx[9]={0,-2,-2,-1,-1,1,1,2,2};
int pty[9]={0,-1,1,-2,2,-2,2,-1,1};
bool isvalid(int i,int j){
	if(i<0||j<0)return 0;
	for(int p=0;p<9;p++)
	if(i==ptx[p]&&j==pty[p])return 0;
	return 1;
}
int main(){
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(int i=0;i<=8;i++)ptx[i]+=x,pty[i]+=y;
	for(int i=0;i<=n;i++){
		if(isvalid(i,0))board[i][0]=1;
		else break;
	}
	for(int j=0;j<=m;j++){
		if(isvalid(0,j))board[0][j]=1;
		else break;
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	board[i][j]=isvalid(i,j)?board[i-1][j]+board[i][j-1]:0;	
	printf("%lld",board[n][m]);
	return 0;
}
/*
recursive method
int validpt(int i,int j){
	return isvalid(i,j)?dfs(i,j):0;
}
int dfs(int i,int j){
	if(i==0&&j==0){return 1;}
	return validpt(i-1,j)+validpt(i,j-1);
}
*/
