//p2455
#include <cstdio>
template <typename T>
T gcd(T a,T b){
	return (b==0)?a:gcd(b,a%b);
}
int m,n;
int a[1000010];
int main(){
	scanf("%d%d",&n,&m);
	
	for(int k=1;k<=n;k++)scanf("%d",&a[k]);
	while(m--){
		int i,j;scanf("%d%d",&i,&j);
		int s=a[i];
		for(int k=i;k<=j;k++)s=gcd(s,a[k]);
		printf("%d\n",s);
	}
	return 0;
}
