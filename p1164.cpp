//p1164
#include <cstdio>
#include <cstring>
int a[10010],n,m,x;
int main(){
	a[0]=1;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		for(int i=m;i>=x;i--)a[i]+=a[i-x];
	}
	printf("%d",a[m]);
	return 0;
}
