//p3887
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
vector<int> kn,dn,mn,fn;int k,d,m,f,q,total,a,b,c,x;
int main(){
	scanf("%d%d%d%d",&k,&d,&m,&f);
	for(int i=1;i<=k;i++){scanf("%d",&x);kn.push_back(x);}
	sort(kn.begin(),kn.end());
	for(int i=1;i<=d;i++){scanf("%d",&x);dn.push_back(x);}
	sort(dn.begin(),dn.end());
	for(int i=1;i<=m;i++){scanf("%d",&x);mn.push_back(x);}
	sort(mn.begin(),mn.end());
	for(int i=1;i<=f;i++){scanf("%d",&x);fn.push_back(x);}
	sort(fn.begin(),fn.end());
	scanf("%d",&q);
	while(q--){
		total=kn.back();kn.pop_back();
		scanf("%d%d%d",&a,&b,&c);
		for(int j=1;j<=a;j++){total+=dn.back();dn.pop_back();}
		for(int j=1;j<=b;j++){total+=mn.back();mn.pop_back();}
		for(int j=1;j<=c;j++){total+=fn.back();fn.pop_back();}
		printf("%.2lf\n",(double)total/11);
	}
	return 0;
}

 
