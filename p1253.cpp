//p1253
#include <cstdio>
#include <algorithm>
using namespace std;
struct data{
	int idx,dta;
}dt[10010];
bool cmp(data a,data b){
	return a.dta>b.dta;
}
int n,x,y;
int main(){
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		scanf("%d%d",&x,&y);
		dt[k].dta=x*y;
		dt[k].idx=k;
	}
	sort(dt+1,dt+n+1,cmp);
	for(int k=1;k<=n;k++)printf("%d ",dt[k].idx);
	return 0;
}
