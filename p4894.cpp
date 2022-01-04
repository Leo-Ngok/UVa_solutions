//p4894
#include <cstdio>
long long a,b,c,d,e,f;
int main(){
	while(scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f)!=EOF){	
		printf("%lld %lld %lld\n",b*f-c*e,c*d-a*f,a*e-b*d);
	}	
	return 0;
}
