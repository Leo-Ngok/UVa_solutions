//p2299
#include<cstdio>
using namespace std;
#define nmax 4000
struct Edge{//edge structure
    int z;//the vertex that this edge points to
    long long val;//weight of the edge
    int nexty;//the index of the next edge from the same vertex
}edge[400010];
int head[nmax];//pointer list,only useful in appending edges
int cnt=0;//index number for the edge
bool visit[nmax]={0};//state of edge finalized
long long dis[nmax];//working value
inline void add(int a,int b,long long c){//store the edges
    edge[++cnt].z=b;
    edge[cnt].val=c;
    edge[cnt].nexty=head[a];//the next edge for searching vertex
    head[a]=cnt;//update pointer
    edge[++cnt].z=a;
    edge[cnt].val=c;
    edge[cnt].nexty=head[b];//the next edge for searching vertex
    head[b]=cnt;//update pointer
    
}
int main()
{
    int n,m,s,t;
    int a,b,c;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)dis[i]=2147483647;//initialize the working value
    for(int i=0;i<m;i++){//read all the edges
    scanf("%d%d%d",&a,&b,&c);add(a,b,c);}
    s=1;
    int curr=s;
    dis[s]=0;
    long long minn;
    while(!visit[curr]){//if it is not visited, false if all vertices are visited
        visit[curr]=1;//label as visited
        for(int i=head[curr];i!=0;i=edge[i].nexty){//relaxation
            if(!visit[edge[i].z]&&dis[edge[i].z]>dis[curr]+edge[i].val)
            dis[edge[i].z]=dis[curr]+edge[i].val;//update the working value
        }
        minn=2147483647;
        for(int i=1;i<=n;i++){
            if(!visit[i]&&minn>dis[i]){//get the index of the next vertex to be visited
                minn=dis[i];
                curr=i;
            }
        }
    }
    printf("%lld ",dis[n]);
    return 0;
}
