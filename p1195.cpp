//p1195
#include <cstdio>
#include <algorithm>
using namespace std;
struct edge{
	int u,v,w;
	bool operator <(const edge &e2) const{
		return w<e2.w;
	}
}E[10010];
int pv[1010];
int fp(int u){
	if(u==pv[u])return u;
	return pv[u]=fp(pv[u]);
}
void unionv(int u,int v){
	int p1=fp(u);int p2=fp(v);
	if(p1!=p2)pv[p2]=p1;
}
int main(){
	int n,m,k;scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].w);		
	}	 
	sort(E,E+m);
	for(int i=1;i<=n;i++)pv[i]=i;
	int count=0,maxw=0;
	for(int i=0;i<m;i++){
		int U=fp(E[i].u),V=fp(E[i].v);
		if(U!=V){
			unionv(U,V);
			maxw+=E[i].w;
			count++;
		}
		if(count==n-k){
			printf("%d",maxw);
			return 0;
		}
	}
	
	printf("No Answer");
	return 0;
}
