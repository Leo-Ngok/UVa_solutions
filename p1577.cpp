//p1577
#include <cstdio>
#define maxn 10010
typedef long long LL;
LL a[maxn];
int main(){
	int n,m;scanf("%d%d",&n,&m);
	LL l=0ll,r=0ll;
	double temp;
	for(int k=0;k<n;k++){
		scanf("%lf",&temp);
		a[k]=(LL)(temp*100);
		if(a[k]>r)r=a[k];
	}
	while(1<r-l){
		LL mid=(l+r)/2;
		LL sum=0;
		for(int k=0;k<n;k++){
			if(a[k]>mid)sum+=(a[k]/mid);
		}
		if(sum>=m)l=mid;
		else r=mid;
		if(mid==0){
			printf("0.00");return 0;
		}
	}
	printf("%.2lf",((double)l)/100);return 0;
}


