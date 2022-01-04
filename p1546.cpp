//p1546
#include <cstdio>
#include <algorithm>
using namespace std;
struct edge{
	int u,v,w;
	bool operator <(const edge &e2) const{
		return w<e2.w;
	}
}E[5000];
int pv[110];
int fp(int u){
	if(u==pv[u])return u;
	return fp(pv[u]);
}
void unionv(int u,int v){
	int p1=fp(u);int p2=fp(v);
	if(p1!=p2)pv[p2]=p1;
}
int main(){
	int n;scanf("%d",&n);
	int vertices=0;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
		int x;scanf("%d",&x);
		if(j>i){
			E[vertices].u=i;
			E[vertices].v=j;
			E[vertices].w=x;
			vertices++;
		}
	}
	sort(E,E+n*(n-1)/2);
	for(int k=1;k<=n;k++)pv[k]=k;
	int count=0,maxw=0;
	for(int k=0;k<n*(n-1)/2;k++){
		if(fp(E[k].u)!=fp(E[k].v)){
			unionv(E[k].u,E[k].v);
			count++;maxw+=E[k].w;
		}
		if(count==n-1)break;
	}
	
	printf("%d\n",maxw);
	
	//for(int k=1;k<=n;k++)printf("%d",pv[k]);
}
