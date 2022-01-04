//p1596
#include <cstdio>
char board[120][120];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
int cnt=0,n,m;
bool valid(int x,int y){
	if(x<0||y<0||x>=n||y>=m)return false;
	if(board[x][y]!='W')return false;
	return true;
}
void dfs(int x,int y,bool state){
	bool flg=0;
	board[x][y]='.';
	for(int i=0;i<8;i++){
		if(valid(x+dx[i],y+dy[i])){
			dfs(x+dx[i],y+dy[i],state);
			state=0,flg=1;
		}
	}
	if(flg==0&&state==1)cnt++;
} 
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%s",board[i]);
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	if(valid(i,j))dfs(i,j,1);
	printf("%d",cnt);
	return 0;
}
