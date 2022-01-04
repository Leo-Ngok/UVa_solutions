//p4057
#include <cstdio>
template <typename T>
T gcd(T a,T b){
	return (b==0)?a:gcd(b,a%b);
}
template <typename T>
T lcm(T a,T b){
	return a*b/gcd(a,b);
}
int main(){
	long long a,b,c;scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld",lcm(lcm(a,b),c));
}
