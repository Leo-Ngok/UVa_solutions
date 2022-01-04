//p1803
#include <algorithm>
#include <cstdio>
struct node{
	int l,r;
}nd[1000010];
bool cmp(node a,node b){
	if(a.r==b.r)return a.l<b.l;
	else return a.r<b.r;
}
int n,sum;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d%d",&nd[i].l,&nd[i].r);
	std::sort(nd+1,nd+n+1,cmp);
	sum=1;
	int t=nd[1].r;
	for(int i=2;i<=n;i++){
		if(nd[i].l>=t){
			sum++;t=nd[i].r;
		}
	}
	printf("%d",sum);
	return 0;
}
