//p2330,kruskal
#include <cstdio>
#include <algorithm>
using namespace std;
struct edge{
	int u,v,w;
	bool operator <(const edge &e2) const{
		return w<e2.w;
	}
}E[1000010];
int pv[10010];
int fp(int u){
	if(u==pv[u])return u;
	return fp(pv[u]);
}
void unionv(int u,int v){
	int p1=fp(u);int p2=fp(v);
	if(p1!=p2)pv[p2]=p1;
}
int main(){
	int n,m;scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].w);
	sort(E,E+m);
	for(int k=1;k<=n;k++)pv[k]=k;
	int count=0,maxw=0;
	for(int k=0;k<m;k++){
		if(fp(E[k].u)!=fp(E[k].v)){
			unionv(E[k].u,E[k].v);
			count++;maxw=E[k].w;
		}
		if(count==n-1)break;
	}
	printf("%d %d\n",count,maxw);
	
	//for(int k=1;k<=n;k++)printf("%d",pv[k]);
}
