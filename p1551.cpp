//p1551
#include <cstdio>
int ren[5001];
int find(int n){
	if(ren[n]==n)return n;
	return find(ren[n]);
}
void unionv(int m,int n){
	int p1=find(m),p2=find(n);
	if(p1!=p2)ren[p2]=p1;
}
int main(){
	int n,m,p;scanf("%d %d%d",&n,&m,&p);
	for(int k=1;k<=n;k++)ren[k]=k;
	while(m--){
		int x,y;scanf("%d%d",&x,&y);
		unionv(x,y);
	}
	while(p--){
		int a,b;scanf("%d%d",&a,&b);
		if(find(a)!=find(b))printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
