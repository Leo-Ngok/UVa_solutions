//p4995
#include <cstdio>
#include <deque>
#include <algorithm>
using namespace std;
int h[310];
int n,x;long long total=0;
int main(){
	scanf("%d",&n);
	for(int k=0;k<n;k++)scanf("%d",h+k);
	sort(h,h+n);
	total=h[n-1]*h[n-1];
	if(n&1){
		for(int i=0;i<n/2;i++){
			int t1=h[n-1-i]-h[i];
			int t2=h[n-2-i]-h[i];
			total+=t1*t1+t2*t2;
		}
	}else{
		for(int i=0;i<n/2;i++){
			if(i+1!=n/2){
				int t1=h[n-1-i]-h[i];
				int t2=h[n-2-i]-h[i];
				total+=t1*t1+t2*t2;
			}
			else{
				int t=h[n-1-i]-h[i];
				total+=t*t;
			}
		}
	}
	printf("%lld",total);
	return 0;
}
