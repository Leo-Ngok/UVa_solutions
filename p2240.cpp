//p2240
#include <cstdio>
#include <algorithm>
using namespace std;
struct coins{
	int m,v;
}coin[110];
bool cmp(coins a,coins b){
	return a.v*b.m>b.v*a.m;
}
int n,T;
double total=0;
int main(){
	scanf("%d%d",&n,&T);
	for(int k=0;k<n;k++)scanf("%d%d",&coin[k].m,&coin[k].v);
	sort(coin,coin+n,cmp);
	for(int i=0;i<n;i++){
		if(T>=coin[i].m){
			total+=coin[i].v;
			T-=coin[i].m;
		}else{
			total+=(double)T*coin[i].v/coin[i].m;
			break;
		}
	}
	printf("%.2lf",total);
	return 0;	
}

