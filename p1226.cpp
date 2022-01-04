//p1226 
#include <cstdio>
using namespace std;
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
