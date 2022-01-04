//p3406
#include <cstdio>
#define N 100010
long long cntl[N],a,b,c,n,m,x;
long long sum=0,g,prev;
int main(){
	scanf("%lld%lld",&n,&m);
	scanf("%lld",&prev);
	if(m==1){printf("0");return 0;}
	m--;
	while(m--){
		scanf("%lld",&x);
		if(prev<x)cntl[prev]++,cntl[x]--;
		else cntl[x]++,cntl[prev]--;
		prev=x;
	}
	for(int i=1;i<n;i++){
		g+=cntl[i];
		scanf("%lld%lld%lld",&a,&b,&c);
		sum+=(g*a<g*b+c)?g*a:g*b+c;	
	}
	printf("%lld",sum);
	return 0;
}

