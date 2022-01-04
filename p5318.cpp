//p5318
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define N 1000010
int cnt=0,head[N],n,m,x,y;
bool vis[N];
queue<int> pt;
struct edge{
	int v,next;
}ED[N];
void add_edge(int u,int v){
	bool mvd=0;
	cnt++;
	ED[cnt].v=v;
	int i=head[u],prev=head[u];
	while(i!=-1&&ED[i].v<v)
	prev=i,i=ED[i].next,mvd=1;
	if(mvd)ED[cnt].next=ED[prev].next,ED[prev].next=cnt;
	else ED[cnt].next=head[u],head[u]=cnt;
}
void dfs(int u){
	printf("%d ",u);
	vis[u]=1;
	if(head[u]==-1)return;
	for(int i=head[u];i!=-1;i=ED[i].next)	
		if(!vis[ED[i].v])dfs(ED[i].v);
}
void bfs(){
	memset(vis,0,sizeof(vis));
	pt.push(1),vis[1]=1;
	while(!pt.empty()){
		int u=pt.front();
		pt.pop();
		printf("%d ",u);
		for(int i=head[u];i!=-1;i=ED[i].next)
		if(!vis[ED[i].v])pt.push(ED[i].v),vis[ED[i].v]=1;
	}	
}
int main(){
	memset(head,-1,sizeof(head));
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		add_edge(x,y);
	}
	dfs(1);
	printf("\n");
	bfs();
	return 0;
}
