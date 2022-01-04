//p1082
#include <cstdio>
template <typename T>
T execulid(T a,T b,T &x,T &y)
{
	if(b==0){
		x=1;y=0;return a;
	}
	T r=execulid(b,a%b,x,y);
	T t=x;x=y;y=t-(a/b)*y;return r;
}
template <typename T>
T modinv(T a,T m){
	T x,y,m0=m;
	T g=execulid(a,m,x,y);
	if(x<0)x+=m0;
	return x%m0;
}
int main(){
	long long int a,b;scanf("%lld%lld",&a,&b);
	printf("%lld",modinv(a,b));	
	return 0;
}
