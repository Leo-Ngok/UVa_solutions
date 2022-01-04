//p1824
#include <cstdio>
#include <algorithm>
typedef long long LL;
LL L=1000000000,N,M;
LL x[100010];
bool detem(LL dist){
	LL prev=x[1],cnt=0;
	for(int i=2;i<=N;i++){
		if(x[i]<dist+prev)cnt++;
		else prev=x[i];
	}
	//if(L-prev<dist)cnt++;
	return cnt<=M;
}
int main(){
	scanf("%lld%lld",&N,&M);
	for(int i=1;i<=N;i++)scanf("%lld",x+i);
	std::sort(x+1,x+N+1);
	M=N-M;
	LL l=1,r=L+1;
	while(l+1<r){
		LL mid=(l+r)/2;
		if(detem(mid))l=mid;
		else r=mid;
	}
	printf("%lld",l);
	return 0;
}
