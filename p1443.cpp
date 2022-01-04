//p1443
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
int board[410][410],n,m,x,y;
const int dx[]={-2,-2,-1,1,-1,1,2,2};
const int dy[]={-1,1,-2,-2,2,2,-1,1};
queue<int> px,py,pct;
int main(){
	memset(board,-1,sizeof(board));
	scanf("%d%d%d%d",&n,&m,&x,&y);
	px.push(x),py.push(y),pct.push(0);
	board[x][y]=0;
	while(!pct.empty()){
		int i=px.front(),j=py.front(),k=pct.front();
		px.pop(),py.pop(),pct.pop();
		for(int a=0;a<8;a++){
			int x1=i+dx[a],y1=j+dy[a];
			if(x1<1||x1>n||y1<1||y1>m||board[x1][y1]!=-1)continue;
			px.push(x1),py.push(y1),pct.push(k+1);
			board[x1][y1]=k+1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)printf("%-5d",board[i][j]);
		printf("\n");
	}
	return 0;
}
