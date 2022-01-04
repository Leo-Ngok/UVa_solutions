//p1349
#include <cstdio>
long long arr[3],p,q,a1,a2,n,m;
int main(){
	scanf("%lld%lld%lld%lld%lld%lld",&p,&q,&a1,&a2,&n,&m);
	arr[0]=a1,arr[1]=a2;
	p%=m,q%=m;
	if(n==1){
		printf("%lld",a2%m);
		return 0;
	}
	for(int k=3;k<=n;k++){
		arr[2]=((arr[1]%m)*p)%m+((arr[0]%m)*q)%m;
		arr[0]=arr[1];arr[1]=arr[2];
	}
	printf("%lld",arr[2]%m);
	return 0;
} 
