//p2242
#include <cstdio>
#include<algorithm>
long long a[15010],b[15010],ans=0;int n,m;
int main(){
	scanf("%d%d",&n,&m);
	for(int k=0;k<n;k++)scanf("%lld",a+k);
	for(int i=1;i<n;i++)b[i]=a[i]-a[i-1];
	std::sort(b+1,b+n);
	for(int k=1;k<=n-m;k++)ans+=b[k];
	printf("%lld",ans+m);
	return 0;
}
