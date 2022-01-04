//poj3262
#include <cstdio>
#include <algorithm>
using namespace std;
struct cow{
	int t,flowers;
};
bool sorfx(const cow &c1,const cow &c2){
	if(c1.flowers!=c2.flowers)return c1.flowers>c2.flowers;
	else return c1.t<c2.t;
}
int main(){
	int n;scanf("%d",&n);
	cow co[n];
	int tt=0;
	for(int k=0;k<n;k++){
		scanf("%d%d",&co[k].t,&co[k].flowers);
		tt+=co[k].flowers;
	}
	sort(co,co+n,sorfx);
	int s=0;
	for(int k=0;k<n;k++){
		tt-=co[k].flowers;
		s+=co[k].t*tt;
	}
	printf("%d",2*s);return 0;
} 
