//p2121
#include <cstdio>
#include <algorithm>
using namespace std;
int f[100010];
int find(int n){
	if(f[n]==n)return n;
	return f[n]=find(f[n]);
}
void unionn(int m,int n){
	int p=find(m),q=find(n);
	if(p!=q)f[p]=q;
}
struct edge{
	int u,v,w;
}E[100010];
bool cmp(edge e1,edge e2){
	return e1.w>e2.w;
}
int n,m,k,cnt=0,ans=0;
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)f[i]=i;
	for(int i=0;i<m;i++)scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].w);
	sort(E,E+m,cmp);
	for(int i=0;i<m;i++){
		int p=find(E[i].u),q=find(E[i].v);
		if(p!=q){
			unionn(E[i].u,E[i].v);
			cnt++;
			ans+=E[i].w;
		}
		if(cnt==k)break;
	}
	printf("%d",ans);
	return 0;
}
