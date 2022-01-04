//p5656
#include <cstdio>
template <typename T>
T execulid(T a,T b,T &x,T &y)
{
	if(b==0){x=1;y=0;return a;}
	T r=execulid(b,a%b,x,y);
	T t=x;x=y;y=t-(a/b)*y;return r;
}
template <typename T>
T gcd(T a,T b){return b==0?a:gcd(b,a%b);}
int main(){
	int n;scanf("%d",&n);
	while(n--){
		long long int a,b,c,x,y,s,xmin,xmax,ymin,ymax;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long int g=gcd(a,b);
		if(c%g!=0){printf("-1\n");continue;}
		a/=g;b/=g;c/=g;execulid(a,b,x,y);x*=c;y*=c;
		xmin=(x>0&&x%b!=0)?x%b:x%b+b;ymax=(c-a*xmin)/b;
		ymin=(y>0&&y%a!=0)?y%a:y%a+a;xmax=(c-b*ymin)/a;
		if(xmax>0){
			s=(xmax-xmin)/b+1;
			printf("%lld %lld %lld %lld %lld\n",s,xmin,ymin,xmax,ymax);
		}else printf("%lld %lld\n",xmin,ymin);
	}
	return 0;
}
