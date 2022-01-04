//p3372
#include <cstdio>
typedef long long LL;
LL a[100010];
int main(){
	int n,m;scanf("%d%d",&n,&m);
	for(int k=1;k<=n;k++)scanf("%lld",&a[k]);
	while(m--){
		int z,x,y;scanf("%d",&z);
		if(z==1){
			LL k;scanf("%d%d%lld",&x,&y,&k);
			for(int j=x;j<=y;j++)a[j]+=k;
		}else{
			LL sum=0;
			scanf("%d%d",&x,&y);
			for(int j=x;j<=y;j++)sum+=a[j];
			printf("%lld\n",sum);
		}
	}
	return 0;
}
