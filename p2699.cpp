//p2699
#include <cstdio>
#include <math.h>
long long fastpow(long long a,long long n){
	long long ans=1;
	while(n){if(n&1)ans*=a;
		a*=a;n>>=1;
	}
	return ans;
}
int main(){
	bool f=0;
	long long l,r,w;scanf("%lld%lld%lld",&l,&r,&w);
	if(w==1){
		if(l>1)printf("-1");
		else printf("1");
	}else{
		l=log(l)/log(w);r=log(r)/log(w);
		if(l>=r)printf("-1");		
		else{
			
			for(int k=l;k<=r;k++){
				long long ans=fastpow(w,k);
				if(ans<l)continue;
				printf("%lld ",ans);
				f=1;							
			}
			if(!f)printf("-1");
		} 
	}
	
	return 0;
} 
