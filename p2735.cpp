//p2735
#include <cstdio>
template <typename T>
T gcd(T a,T b){return b==0?a:gcd(b,a%b);}
int abs(int x){
	return(x<0)?-x:x;
}
int main(){
	int n,m,p;scanf("%d%d%d",&n,&m,&p);
	int pol=gcd(m,n)+p+gcd(abs(n-p),m);
	double total=p*m/2-pol/2+1;
	printf("%.0f",total);return 0;
}
