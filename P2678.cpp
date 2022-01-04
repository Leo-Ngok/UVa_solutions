//p2678
#include <cstdio>
int L,N,M;
int x[50010];
bool detem(int dist){
	int prev=0,cnt=0;
	for(int i=1;i<=N;i++){
		if(x[i]<dist+prev)cnt++;
		else prev=x[i];
	}
	if(L-prev<dist)cnt++;
	return cnt<=M;
}
int main(){
	scanf("%d%d%d",&L,&N,&M);
	for(int i=1;i<=N;i++)scanf("%d",x+i);
	int l=1,r=L+1;
	while(l+1<r){
		int mid=(l+r)/2;
		if(detem(mid))l=mid;
		else r=mid;
	}
	printf("%d",l);
	return 0;
}
