//p1708
#include <cstdio>
long long n,a,b,x,y;
long long nabs(long long x){
	return (x<0)?-x:x;
}
int main(){
	scanf("%lld",&n);
	for(int i=0;i<2*n;i++){
		scanf("%lld%lld",&x,&y);
		if(i<n){a+=x;b+=y;}
		else{a-=x;b-=y;}
	}
	printf("%lld",nabs(a)+nabs(b));
	return 0;
}
