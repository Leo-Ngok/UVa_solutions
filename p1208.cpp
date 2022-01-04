//p1208
#include <cstdio>
#include <algorithm>
struct node{
	int p,a;
}cow[5010];
bool cmp(node a,node b){
	return a.p<b.p;
}
int n,m,x,y,gt=0;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)scanf("%d%d",&cow[i].p,&cow[i].a);
	std::sort(cow+1,cow+m+1,cmp);
	for(int i=1;i<=m;i++){
		if(n-cow[i].a<0){
			gt+=n*cow[i].p;break;
		}else{
			gt+=cow[i].p*cow[i].a;
			n-=cow[i].a;
		}
	}
	printf("%d",gt);
	return 0;
}
