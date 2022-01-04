//p1548,2241
#include <cstdio>
long long n,m;
int main(){
	scanf("%lld %lld",&n,&m);
	long long rnum=m*n*(m+1)*(n+1)/4;
	long long snum=0;
	if(m>n){long long t=n;n=m;m=t;}
	for(int r=1;r<=m;r++)snum+=(n-(r-1))*(m-(r-1));
	printf("%lld %lld",snum,rnum-snum);
	return 0;
}
