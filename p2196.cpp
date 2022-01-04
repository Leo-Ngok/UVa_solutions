//p2196
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int val[30],cnt=0,head[30],maxn=0,n,x,tmparr[30],ansdep,ansarr[30];
struct edge{
	int v, next;
}ED[200];
void add_edge(int u,int v){
	cnt++;
	ED[cnt].v=v;
	ED[cnt].next=head[u];
	head[u]=cnt;
}
void dfs(int u,int cost,int depth){
	tmparr[depth]=u;
	if(head[u]==-1){
		if(cost+val[u]>maxn){
			ansdep=depth;
			for(int i=1;i<=depth;i++)ansarr[i]=tmparr[i];
			maxn=cost+val[u];
		}
		return;
	}
	for(int i=head[u];i>-1;i=ED[i].next)
		dfs(ED[i].v,cost+val[u],depth+1);
}
int main(){
	memset(head,-1,sizeof(head));
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",val+i);
	for(int i=1;i<=n-1;i++)
	for(int j=i+1;j<=n;j++){
		scanf("%d",&x);
		if(x)add_edge(i,j);	
	}
	for(int i=1;i<=n;i++)dfs(i,0,1);
	for(int i=1;i<=ansdep;i++)printf("%d ",ansarr[i]);
	printf("\n%d",maxn);
	return 0;
}
