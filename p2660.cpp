//p2660
#include <cstdio>
typedef long long LL;
LL x0,y0,ans=0;
int swap(LL &a,LL &b){
	if(a>b){LL t=a;a=b;b=t;}
}
int main(){
	scanf("%lld%lld",&x0,&y0);
	while(x0&&y0){
		if(x0==y0){
			ans+=x0;break;}
		swap(x0,y0);
		ans+=(y0/x0)*x0;y0%=x0;
	}
	printf("%lld",4*ans);
	return 0;
}
