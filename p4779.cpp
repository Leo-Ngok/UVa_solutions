//p4779
#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010
//adjacency list
struct edge{int v,w,next;}ED[MAXN];
int head[MAXN],listpos=0;
void adj_list_init(){memset(head,-1,sizeof(head));}
void add_dir_edge(int u,int v,int w){ED[++listpos].v=v,ED[listpos].w=w;ED[listpos].next=head[u];head[u]=listpos;}

//dijkstra
int dis[MAXN];bool vis[MAXN];
struct vtx{
	int n,dist;
	vtx(int _n=0,int _dis=0):n(_n),dist(_dis){}
	bool operator <(const vtx &b)const{return dist>b.dist;}
};
priority_queue<vtx> pq;
void dijkstra(int st){
	memset(dis,0x3f3f3f3f,sizeof(dis));
	memset(vis,0,sizeof(vis));
	dis[st]=0;
	pq.push(vtx(st,0));
	while(!pq.empty()){
		vtx p=pq.top();pq.pop();
		int num=p.n;
		if(vis[num])continue;
		vis[num]=1;
		for(int i=head[num];i!=-1;i=ED[i].next){
			edge edg=ED[i];
			if(!vis[edg.v]&&dis[edg.v]>dis[num]+edg.w){
				dis[edg.v]=dis[num]+edg.w;
				pq.push(vtx(edg.v,dis[edg.v]));
			}
		}
	}	
}
int n,m,s,u,v,w;
int main(){
	scanf("%d%d%d",&n,&m,&s);
	adj_list_init();
	while(m--){
		scanf("%d%d%d",&u,&v,&w);
		add_dir_edge(u,v,w);
	}
	dijkstra(s);
	for(int i=1;i<=n;i++)printf("%d ",dis[i]);
	return 0;
}
