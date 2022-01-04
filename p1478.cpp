//p1478
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
	int n,s,a,b,xi,yi;
	scanf("%d %d %d %d",&n,&s,&a,&b);
	int th=a+b;
	vector<int> eft;
	for(int k=0;k<n;k++){
		scanf("%d %d",&xi,&yi);
		if(xi<=th)eft.push_back(yi);		
	}
	sort(eft.begin(),eft.end());
	int ct=0;
	for(int j=0;j<n;j++){
		if(eft[j]<=s){
			ct++;s-=eft[j];
		}else break;
	}
	printf("%d",ct);
	return 0;
}
