//p3371
#include<cstdio>
using namespace std;
struct Edge{
    int z;
    int val;
    int nexty;
}edge[1000000];
int head[20000];//以某??父??引出的最后一??
int cnt=0;//index number for the edge
bool visit[20000]={0};//state of edge finalized
long long dis[10000];//working value
inline void add(int a,int b,int c){
    edge[++cnt].z=b;
    edge[cnt].val=c;
    edge[cnt].nexty=head[a];
    head[a]=cnt;
}
int main()
{
    int n,m,s;
    int a,b,c;
    scanf("%d%d%d",&n,&m,&s);
    for(int i=1;i<=n;i++)dis[i]=2147483647;//initialize the working value
    for(int i=0;i<m;i++){//read all the edges
    scanf("%d%d%d",&a,&b,&c);add(a,b,c);}
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
    for(int i=1;i<=n;i++)printf("%lld ",dis[i]);
    return 0;
}
