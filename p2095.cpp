//p2095
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,k,sum=0;
int types[110];
struct food{
	int idx,k;
}f[210];
bool cmp(food &a,food &b){
	return a.idx>b.idx;
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=k;i++)scanf("%d",types+i);
	for(int j=0;j<n;j++)scanf("%d%d",&f[j].idx,&f[j].k);
	sort(f,f+n,cmp);
	for(int j=0;j<n;j++){
		if(types[f[j].k]>0&&m>0){
			types[f[j].k]--;
			m--;
			sum+=f[j].idx;
		}
	}
	printf("%d",sum);
	return 0;
}
