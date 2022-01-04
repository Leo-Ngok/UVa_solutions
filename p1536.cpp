//p1536
#include <cstdio>
#include <algorithm>
using namespace std;
struct edge{
	int u,v;
}E[1000010];
int pv[10010];
int fp(int u){
	if(u==pv[u])return u;
	return pv[u]=fp(pv[u]);
}
void unionv(int u,int v){
	int p1=fp(u);int p2=fp(v);
	if(p1!=p2)pv[p2]=p1;
}
int main(){
	int n,m;
	while(scanf("%d",&n)&&n){
		scanf("%d",&m);
		for(int i=0;i<m;i++)
			scanf("%d%d",&E[i].u,&E[i].v);
		for(int k=1;k<=n;k++)pv[k]=k;
		int count=0;
		for(int k=0;k<m;k++){
			if(fp(E[k].u)!=fp(E[k].v)){
				unionv(E[k].u,E[k].v);
				count++;
			}
			unionv(E[k].u,E[k].v);			
			//if(count==n-1)break;
		}		
		printf("%d\n",n-1-count);
	}
}
