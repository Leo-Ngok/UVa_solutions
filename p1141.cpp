//p1141
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
struct pt{
	int x,y;
}point;
queue<pt > visl;
char mp[1010][1010];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
bool vis[1010][1010];
int n,m,cnt,x0,y0;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%s",mp[i]);
	while(m--){
		memset(vis,false,sizeof(vis));
		cnt=1;
		scanf("%d%d",&x0,&y0);
		point.x=x0-1,point.y=y0-1;
		vis[x0-1][y0-1]=1;
		visl.push(point);
		while(!visl.empty()){
			int x1=visl.front().x,y1=visl.front().y;
			visl.pop();
			for(int i=0;i<4;i++){
				point.x=x1+dx[i],point.y=y1+dy[i];
				if(point.x<0||point.y<0||point.x>=n||point.y>=n||vis[point.x][point.y])continue;
				if(mp[point.x][point.y]==mp[x1][y1])continue;
				cnt++;
				visl.push(point);
				vis[point.x][point.y]=1;
			}	
		}
		printf("%d\n",cnt);
	}
	return 0;
}

