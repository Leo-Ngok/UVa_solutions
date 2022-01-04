//P3811
#include <cstdio>
typedef long long LL;
int main(){
	LL a,n,k,ans=1;scanf("%lld%lld%lld",&a,&n,&k);
	printf("%lld^%lld mod %lld=",a,n,k);
	while(n){
		if(n&1)ans=((ans%k)*(a%k))%k;
		a=((a%k)*(a%k))%k;n=n>>1;
	}
	printf("%lld",ans%k);
	return 0;
}
int main(){
	int n,p,x,y;scanf("%d %d",&n,&p);
	for(int k=1;k<=n;k++){
		int ans=1;
		int i=p-2;
		while(i>0){
			if(i&1)ans=((ans%p)*(k%p))%p;
			k=((k%p)*(k%p))%p;i=p>>1;
		}
		printf("%d",ans%p);	
	}
	return 0;
}
