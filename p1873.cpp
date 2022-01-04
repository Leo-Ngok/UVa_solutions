//p1873
#include <cstdio>
#define maxn 1000010
#include <math.h>
typedef long long LL;
LL a[maxn];
double num;
int main(){
	int n,m;scanf("%d%d",&n,&m);
	LL l=0LL,r=0LL;
	for(int k=0;k<n;k++){
		scanf("%lf",&num);
		a[k]=num*100;
		r+=a[k];
	}
	r=r/m+1;;
	while(l<r){
		LL mid=(l+r+1)/2;
		LL sum=0;
		for(int k=0;k<n;k++)sum+=a[k]/mid;
		if(sum>=m)l=mid;
		else r=mid-1;
	}
	printf("%.2lf",(double)l/100);return 0;
}
