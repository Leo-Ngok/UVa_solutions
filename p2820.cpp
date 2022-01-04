//p2820
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
	return pv[u]=fp(pv[u]);
}
void unionv(int u,int v){
	int p1=fp(u);int p2=fp(v);
	if(p1!=p2)pv[p2]=p1;
}
int main(){
	int n,m;scanf("%d%d",&n,&m);
	int totalw=0;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].w);
		totalw+=E[i].w;
	}	 
	sort(E,E+m);
	for(int k=1;k<=n;k++)pv[k]=k;
	int count=0,maxw=0;
	for(int k=0;k<m;k++){
		int U=fp(E[k].u),V=fp(E[k].v);
		if(U!=V){
			unionv(U,V);
			maxw+=E[k].w;
			count++;
		}
		if(count==n-1)break;
	}
	if(count>=n-1)printf("%d",totalw-maxw);
	else printf("-1");
	return 0;
}
