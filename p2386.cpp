//p2386
#include <cstdio>
int n1,k1,t;
long long cnt=0;
void dfs(int rem,int k,int prev){
	if(k==1){cnt++;return;}
	for(int i=prev;i<=rem/k;i++)dfs(rem-i,k-1,i);
}
int main(){
	scanf("%d",&t);
	while(t--){
		cnt=0;
		scanf("%d%d",&n1,&k1);	
		dfs(n1,k1,0);
		printf("%lld\n",cnt);
	}	
	return 0;
}
