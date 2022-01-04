//p3367
#include <cstdio>
int ren[10010];
int find(int n){
	if(ren[n]==n)return n;
	ren[n]=find(ren[n]);
	return ren[n];
}
void unionv(int m,int n){
	int p1=find(m),p2=find(n);
	if(p1!=p2)ren[p2]=p1;
}
int main(){
	int n,m;scanf("%d%d",&n,&m);
	for(int k=1;k<=n;k++)ren[k]=k;
	while(m--){
		int z,x,y;scanf("%d%d%d",&z,&x,&y);
		if(z==1)unionv(x,y);
		else{
			if(find(x)!=find(y))printf("N\n");
			else printf("Y\n");
		}
	}
	return 0;
}
