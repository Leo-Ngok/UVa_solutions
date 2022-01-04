//p5651
#include<cstdio>
#include <cstring>
using namespace std;
int n,m,q,s,x,a,b;
struct Edge{//edge structure
    int z;//the vertex that this edge points to
    long long val;//weight of the edge
    int nexty;//the index of the next edge from the same vertex
}edge[200010];
int head[100010];//pointer list,only useful in appending edges
int cnt=0;//index number for the edge
bool visit[100010]={0};//state of edge finalized
long long dis[100010],c;//working value
inline void add(int a,int b,long long c){//store the edges
    edge[++cnt].z=b;
    edge[cnt].val=c;
    edge[cnt].nexty=head[a];//the next edge for searching vertex
    head[a]=cnt;//update pointer
}
void dijkstra(){
	for(int i=1;i<=n;i++)dis[i]=9223372036854775807;//initialize the working value
	memset(visit,0,sizeof(visit));
	int curr=s;
    dis[s]=0;
    long long minn;
    while(!visit[curr]){//if it is not visited, false if all vertices are visited
        visit[curr]=1;//label as visited
        for(int i=head[curr];i!=0;i=edge[i].nexty){//relaxation
            if(!visit[edge[i].z]&&dis[edge[i].z]>dis[curr]+edge[i].val)
            dis[edge[i].z]=dis[curr]+edge[i].val;//update the working value
        }
        minn=9223372036854775807;
        for(int i=1;i<=n;i++){
            if(!visit[i]&&minn>dis[i]){//get the index of the next vertex to be visited
                minn=dis[i];
                curr=i;
            }
        }
    }
}
int main()
{
    
    scanf("%d%d%d",&n,&m,&q);
    for(int i=0;i<m;i++){//read all the edges
    scanf("%d%d%lld",&a,&b,&c);add(a,b,c);}
    while(q--){
    	scanf("%d%d",&s,&x);
    	dijkstra();
    	printf("%lld\n",dis[x]);
	}
    return 0;
}
