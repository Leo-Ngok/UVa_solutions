#include <cstdio>
#include <algorithm>
using namespace std;
struct pep{
	int k,t;
}t[1010];
bool cmp(pep a,pep b){
	return a.t<b.t;
}
int n;long long tt[1010],sum=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)t[i].k=i,scanf("%d",&t[i].t);
	sort(t+1,t+n+1,cmp);
	for(int i=1;i<=n;i++)printf("%d ",t[i]);
	printf("\n");
	if(n==1)printf("0");
	else{
		tt[2]=t[1].t;
		if(n==2){printf("%.2lf",(double)tt[2]/2);return 0;}
		for(int k=3;k<=n;k++){
			tt[k]=tt[k-1]+t[k-1].t;
		}
		for(int k=2;k<=n;k++)sum+=tt[k];
		printf("%.2lf",(double)sum/n);
	}
	return 0;
}
