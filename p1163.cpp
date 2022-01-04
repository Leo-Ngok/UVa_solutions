//p1163
#include <cstdio>
#include <cmath>
#define eps 1e-6
double m,t,n;
int main() {
	scanf("%lf%lf%lf",&t,&m,&n);
	double l=0,r=10,mid,f=t/m,tmp;
	while(r-l>eps){
		mid=(l+r)/2;
		tmp=(1-pow(1.0/(1.0+mid),n))/mid;
		if(tmp>f) l=mid;
		else r=mid;
	}
	printf("%.1lf",mid*100);
	return 0;
}
