//p2945
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long LL;
LL N,x,y,m[25010],b[25010];
int main(){
	scanf("%lld%lld%lld",&N,&x,&y);
	for(int i=0;i<N;i++)scanf("%lld%lld",m+i,b+i);
	sort(m,m+N);sort(b,b+N);
	LL sum=0;
	for(int i=0;i<N;i++){
		if(b[i]>m[i])sum+=(b[i]-m[i])*x;
		else if(b[i]<m[i])sum+=(m[i]-b[i])*y;
	}
	printf("%lld",sum);return 0;
}

